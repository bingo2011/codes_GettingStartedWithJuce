/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MediaPlayer.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MediaPlayer::MediaPlayer ()
{
    addAndMakeVisible (openButton = new TextButton ("open"));
    openButton->setButtonText ("Open...");
    openButton->addListener (this);

    addAndMakeVisible (playButton = new TextButton ("play"));
    playButton->setButtonText ("Play");
    playButton->addListener (this);
    playButton->setColour (TextButton::buttonColourId, Colours::green);

    addAndMakeVisible (stopButton = new TextButton ("stop"));
    stopButton->setButtonText ("Stop");
    stopButton->addListener (this);
    stopButton->setColour (TextButton::buttonColourId, Colours::red);

    addAndMakeVisible (settingsButton = new TextButton ("settings"));
    settingsButton->setButtonText ("Audio Settings...");
    settingsButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

    // Disable the play and stop buttons until a file is loaded.
    playButton->setEnabled (false);
    stopButton->setEnabled (false);

    // Configure the format manager to read common audio file types.
    formatManager.registerBasicFormats();

    // Connect the transport source to the source player.
    sourcePlayer.setSource (&transportSource);

    // Connect the source player to the audio device.
    deviceManager.addAudioCallback (&sourcePlayer);

    // Initialize the device with basic settings (no inputs, two outputs).
    deviceManager.initialise (0, 2, nullptr, true);

    // Listen for changes
    deviceManager.addChangeListener (this);
    transportSource.addChangeListener (this);

    // Set the initial state to stopped.
    state = Stopped;

    //[/Constructor]
}

MediaPlayer::~MediaPlayer()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    openButton = nullptr;
    playButton = nullptr;
    stopButton = nullptr;
    settingsButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MediaPlayer::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MediaPlayer::resized()
{
    openButton->setBounds (8, 8, getWidth() - 19, 24);
    playButton->setBounds (8, 40, getWidth() - 19, 24);
    stopButton->setBounds (8, 72, getWidth() - 19, 24);
    settingsButton->setBounds (8, 104, getWidth() - 19, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MediaPlayer::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..

        // Present a file chooser.
        FileChooser chooser ("Select a Wave file to play...",
                             File::nonexistent,
                             "*.wav");

        if (chooser.browseForFileToOpen()) {
            File file (chooser.getResult());

            // Create a reader from the selected file.
            readerSource = new AudioFormatReaderSource (formatManager.createReaderFor (file), true);

            // Connect the reader to the transport source.
            transportSource.setSource (readerSource);

            // Enable the play button.
            playButton->setEnabled (true);
        }

        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == playButton)
    {
        //[UserButtonCode_playButton] -- add your button handler code here..

        // The "play"/"pause" button was clicked, act depending on the current playback state.
        if ((Stopped == state) || (Paused == state))
            changeState (Starting);
        else if (Playing == state)
            changeState (Pausing);

        //[/UserButtonCode_playButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..

        // The "stop"/"Return to Zero" button was clicked, act depending on the current playback state.
        if (Paused == state)
            changeState (Stopped);
        else
            changeState (Stopping);

        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == settingsButton)
    {
        //[UserButtonCode_settingsButton] -- add your button handler code here..
        bool showMidiInputOptions = false;
        bool showMidiOutputSelector = false;
        bool showChannelsAsStereoPairs = true;
        bool hideAdvancedOptions = false;

        // Present an audio settings dialog box.
        AudioDeviceSelectorComponent settings (deviceManager,
                                               0, 0, 1, 2,
                                               showMidiInputOptions,
                                               showMidiOutputSelector,
                                               showChannelsAsStereoPairs,
                                               hideAdvancedOptions);
        settings.setSize (500, 400);

        DialogWindow::showModalDialog (String ("Audio Settings"),
                                       &settings,
                                       TopLevelWindow::getTopLevelWindow (0),
                                       Colours::white,
                                       true);
        //[/UserButtonCode_settingsButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void MediaPlayer::changeListenerCallback (ChangeBroadcaster* src)
{
    if (&deviceManager == src) {

        // The device manager changed, get the current setup.
        AudioDeviceManager::AudioDeviceSetup setup;
        deviceManager.getAudioDeviceSetup (setup);

        // Check if there are any output channels.
        if (setup.outputChannels.isZero())
            sourcePlayer.setSource (nullptr); // No outputs, disconnect the source.
        else
            sourcePlayer.setSource (&transportSource); // Some outputs, connect the transport source.

    } else if (&transportSource == src) {

        // The transport source changed, check its playback state.
        if (transportSource.isPlaying()) {
            changeState (Playing); // It's playing, update our state.
        } else {

            // The transport has stopped, adjust our state depending on what caused this.
            if ((Stopping == state) || (Playing == state))
                changeState (Stopped);
            else if (Pausing == state)
                changeState (Paused);
        }

    }
}

void MediaPlayer::changeState (TransportState newState)
{
    if (state != newState) {
        state = newState;
        switch (state) {
            case Stopped: // Update the buttons and the transport, we're in the stopped state.
                playButton->setButtonText ("Play");
                stopButton->setButtonText ("Stop");
                stopButton->setEnabled (false);
                transportSource.setPosition (0.0);
                break;
            case Starting: // We're starting, tell the transport to start.
                transportSource.start();
                break;
            case Playing: // The transport started, update the buttons.
                playButton->setButtonText ("Pause");
                stopButton->setButtonText ("Stop");
                stopButton->setEnabled (true);
                break;
            case Pausing: // We're pausing, stop the transport.
                transportSource.stop();
                break;
            case Paused: // The transport stopped when we were pausing, update the buttons.
                playButton->setButtonText ("Resume");
                stopButton->setButtonText ("Return to Zero");
                break;
            case Stopping: // We're stopping, stop the transport.
                transportSource.stop();
                break;
        }
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MediaPlayer" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.33000001311302185059" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="open" id="6cc3569a77ec21cb" memberName="openButton" virtualName=""
              explicitFocusOrder="0" pos="8 8 19M 24" buttonText="Open..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="play" id="22ff2a5b35e738f0" memberName="playButton" virtualName=""
              explicitFocusOrder="0" pos="8 40 19M 24" bgColOff="ff008000"
              buttonText="Play" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop" id="e34e677f530a596f" memberName="stopButton" virtualName=""
              explicitFocusOrder="0" pos="8 72 19M 24" bgColOff="ffff0000"
              buttonText="Stop" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="settings" id="bf11479b715a432a" memberName="settingsButton"
              virtualName="" explicitFocusOrder="0" pos="8 104 19M 24" buttonText="Audio Settings..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
