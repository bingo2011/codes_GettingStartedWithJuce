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

#include "EntryForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
EntryForm::EntryForm ()
{
    addAndMakeVisible (firstNameLabel = new Label ("firstNameLabel",
                                                   "First Name"));
    firstNameLabel->setFont (Font (15.00f, Font::plain));
    firstNameLabel->setJustificationType (Justification::centredLeft);
    firstNameLabel->setEditable (false, false, false);
    firstNameLabel->setColour (TextEditor::textColourId, Colours::black);
    firstNameLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (firstNameField = new Label ("firstNameField",
                                                   String::empty));
    firstNameField->setFont (Font (15.00f, Font::plain));
    firstNameField->setJustificationType (Justification::centredLeft);
    firstNameField->setEditable (true, true, false);
    firstNameField->setColour (Label::backgroundColourId, Colours::white);
    firstNameField->setColour (TextEditor::textColourId, Colours::black);
    firstNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    firstNameField->addListener (this);

    addAndMakeVisible (lastNameLabel = new Label ("lastNameLabel",
                                                  "Last Name"));
    lastNameLabel->setFont (Font (15.00f, Font::plain));
    lastNameLabel->setJustificationType (Justification::centredLeft);
    lastNameLabel->setEditable (false, false, false);
    lastNameLabel->setColour (TextEditor::textColourId, Colours::black);
    lastNameLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lastNameField = new Label ("lastNameField",
                                                  String::empty));
    lastNameField->setFont (Font (15.00f, Font::plain));
    lastNameField->setJustificationType (Justification::centredLeft);
    lastNameField->setEditable (true, true, false);
    lastNameField->setColour (Label::backgroundColourId, Colours::white);
    lastNameField->setColour (TextEditor::textColourId, Colours::black);
    lastNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    lastNameField->addListener (this);

    addAndMakeVisible (ageLabel = new Label ("ageLabel",
                                             "Age"));
    ageLabel->setFont (Font (15.00f, Font::plain));
    ageLabel->setJustificationType (Justification::centredLeft);
    ageLabel->setEditable (false, false, false);
    ageLabel->setColour (TextEditor::textColourId, Colours::black);
    ageLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ageField = new Label ("ageField",
                                             String::empty));
    ageField->setFont (Font (15.00f, Font::plain));
    ageField->setJustificationType (Justification::centredLeft);
    ageField->setEditable (true, true, false);
    ageField->setColour (Label::backgroundColourId, Colours::white);
    ageField->setColour (TextEditor::textColourId, Colours::black);
    ageField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    ageField->addListener (this);

    addAndMakeVisible (addressGroup = new GroupComponent ("addressGroup",
                                                          "Address"));

    addAndMakeVisible (line1Label = new Label ("line1Label",
                                               "Line 1"));
    line1Label->setFont (Font (15.00f, Font::plain));
    line1Label->setJustificationType (Justification::centredLeft);
    line1Label->setEditable (false, false, false);
    line1Label->setColour (TextEditor::textColourId, Colours::black);
    line1Label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (line1Field = new Label ("line1Field",
                                               String::empty));
    line1Field->setFont (Font (15.00f, Font::plain));
    line1Field->setJustificationType (Justification::centredLeft);
    line1Field->setEditable (true, true, false);
    line1Field->setColour (Label::backgroundColourId, Colours::white);
    line1Field->setColour (TextEditor::textColourId, Colours::black);
    line1Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line1Field->addListener (this);

    addAndMakeVisible (line2Label = new Label ("line2Label",
                                               "Line 2"));
    line2Label->setFont (Font (15.00f, Font::plain));
    line2Label->setJustificationType (Justification::centredLeft);
    line2Label->setEditable (false, false, false);
    line2Label->setColour (TextEditor::textColourId, Colours::black);
    line2Label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (line2Field = new Label ("line2Field",
                                               String::empty));
    line2Field->setFont (Font (15.00f, Font::plain));
    line2Field->setJustificationType (Justification::centredLeft);
    line2Field->setEditable (true, true, false);
    line2Field->setColour (Label::backgroundColourId, Colours::white);
    line2Field->setColour (TextEditor::textColourId, Colours::black);
    line2Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line2Field->addListener (this);

    addAndMakeVisible (line3Label = new Label ("line3Label",
                                               "Line 3"));
    line3Label->setFont (Font (15.00f, Font::plain));
    line3Label->setJustificationType (Justification::centredLeft);
    line3Label->setEditable (false, false, false);
    line3Label->setColour (TextEditor::textColourId, Colours::black);
    line3Label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (line3Field = new Label ("line3Field",
                                               String::empty));
    line3Field->setFont (Font (15.00f, Font::plain));
    line3Field->setJustificationType (Justification::centredLeft);
    line3Field->setEditable (true, true, false);
    line3Field->setColour (Label::backgroundColourId, Colours::white);
    line3Field->setColour (TextEditor::textColourId, Colours::black);
    line3Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line3Field->addListener (this);

    addAndMakeVisible (saveButton = new TextButton ("saveButton"));
    saveButton->setButtonText ("Save...");
    saveButton->addListener (this);

    addAndMakeVisible (openButton = new TextButton ("openButton"));
    openButton->setButtonText ("Open...");
    openButton->addListener (this);

    addAndMakeVisible (undoButton = new TextButton ("undoButton"));
    undoButton->setButtonText ("Undo");
    undoButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

    // Initialize the value tree hierarchy, with undo management.
    personData = ValueTree (personId);
    personData.setProperty (firstNameId, String::empty, &undoManager);
    personData.setProperty (lastNameId, String::empty, &undoManager);
    personData.setProperty (ageId, String::empty, &undoManager);

    ValueTree addressData = ValueTree (addressId);
    addressData.setProperty (line1Id, String::empty, &undoManager);
    addressData.setProperty (line2Id, String::empty, &undoManager);
    addressData.setProperty (line3Id, String::empty, &undoManager);
    personData.addChild (addressData, -1, &undoManager);

    // Listen to changes in the value tree.
    personData.addListener (this);

    //[/Constructor]
}

EntryForm::~EntryForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    firstNameLabel = nullptr;
    firstNameField = nullptr;
    lastNameLabel = nullptr;
    lastNameField = nullptr;
    ageLabel = nullptr;
    ageField = nullptr;
    addressGroup = nullptr;
    line1Label = nullptr;
    line1Field = nullptr;
    line2Label = nullptr;
    line2Field = nullptr;
    line3Label = nullptr;
    line3Field = nullptr;
    saveButton = nullptr;
    openButton = nullptr;
    undoButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void EntryForm::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::grey);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void EntryForm::resized()
{
    firstNameLabel->setBounds (8, 8, 160, 24);
    firstNameField->setBounds (176, 8, 376, 24);
    lastNameLabel->setBounds (8, 40, 160, 24);
    lastNameField->setBounds (176, 40, 376, 24);
    ageLabel->setBounds (8, 72, 160, 24);
    ageField->setBounds (176, 72, 376, 24);
    addressGroup->setBounds (8, 104, 544, 128);
    line1Label->setBounds (24, 128, 160, 24);
    line1Field->setBounds (192, 128, 344, 24);
    line2Label->setBounds (24, 160, 160, 24);
    line2Field->setBounds (192, 160, 344, 24);
    line3Label->setBounds (24, 192, 160, 24);
    line3Field->setBounds (192, 192, 344, 24);
    saveButton->setBounds (8, 240, 544, 24);
    openButton->setBounds (8, 272, 544, 24);
    undoButton->setBounds (8, 304, 544, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void EntryForm::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    undoManager.beginNewTransaction();
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == firstNameField)
    {
        //[UserLabelCode_firstNameField] -- add your label text handling code here..

        // Update the first name field in the value tree from the label.
        personData.setProperty (firstNameId,
                                labelThatHasChanged->getText(),
                                &undoManager);

        //[/UserLabelCode_firstNameField]
    }
    else if (labelThatHasChanged == lastNameField)
    {
        //[UserLabelCode_lastNameField] -- add your label text handling code here..

        // Update the last name field in the value tree from the label.
        personData.setProperty (lastNameId,
                                labelThatHasChanged->getText(),
                                &undoManager);

        //[/UserLabelCode_lastNameField]
    }
    else if (labelThatHasChanged == ageField)
    {
        //[UserLabelCode_ageField] -- add your label text handling code here..

        // Update the age field in the value tree from the label.
        personData.setProperty (ageId,
                                labelThatHasChanged->getText(),
                                &undoManager);

        //[/UserLabelCode_ageField]
    }
    else if (labelThatHasChanged == line1Field)
    {
        //[UserLabelCode_line1Field] -- add your label text handling code here..

        // Get the subtree for the address.
        ValueTree addressData (personData.getChildWithName (addressId));

        // Update the first address line field in the value tree from the label.
        addressData.setProperty (line1Id,
                                 labelThatHasChanged->getText(),
                                 &undoManager);

        //[/UserLabelCode_line1Field]
    }
    else if (labelThatHasChanged == line2Field)
    {
        //[UserLabelCode_line2Field] -- add your label text handling code here..

        // Get the subtree for the address.
        ValueTree addressData (personData.getChildWithName (addressId));

        // Update the second address line field in the value tree from the label.
        addressData.setProperty (line2Id,
                                 labelThatHasChanged->getText(),
                                 &undoManager);

        //[/UserLabelCode_line2Field]
    }
    else if (labelThatHasChanged == line3Field)
    {
        //[UserLabelCode_line3Field] -- add your label text handling code here..

        // Get the subtree for the address.
        ValueTree addressData (personData.getChildWithName (addressId));

        // Update the third address line field in the value tree from the label.
        addressData.setProperty (line3Id,
                                 labelThatHasChanged->getText(),
                                 &undoManager);

        //[/UserLabelCode_line3Field]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void EntryForm::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == saveButton)
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..

        // Present a file chooser to save as an XML file.
        FileChooser chooser ("Save person data",
                             File::nonexistent,
                             "*.xml");

        if (chooser.browseForFileToSave (true)) {
            File file (chooser.getResult());

            // Delete the file if it already exists.
            if (file.existsAsFile())
                file.moveToTrash();

            // Create the stream.
            FileOutputStream stream (file);

            // Convert the value tree to XML.
            ScopedPointer<XmlElement> xml = personData.createXml();

            // Write the XML to the stream.
            xml->writeToStream (stream, String::empty);
        }
        //[/UserButtonCode_saveButton]
    }
    else if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..

        // Present a file chooser to read an XML file.
        FileChooser chooser ("Open person data",
                             File::nonexistent,
                             "*.xml");

        if (chooser.browseForFileToOpen()) {
            Logger* log = Logger::getCurrentLogger();
            File file (chooser.getResult());

            // Read the chosen file as an XML document.
            XmlDocument xmlDoc (file);

            // Get the root element.
            ScopedPointer<XmlElement> xml = xmlDoc.getDocumentElement();

            // Check the element is valid.
            if (xml == nullptr) {
                log->writeToLog ("XML error");
                return;
            }

            // Load the XML as a value tree.
            ValueTree newPerson (ValueTree::fromXml (*xml));

            // Check the type of the value tree matches our application's data type.
            if (newPerson.getType() != personId) {
                log->writeToLog ("Invalid person XML");
                return;
            }

            // Mark a new undo transaction.
            undoManager.beginNewTransaction();

            // Copy the data from the loaded value tree to our store value tree.
            personData.copyPropertiesFrom (newPerson, &undoManager);

            // Copy the subtree too.
            ValueTree newAddress (newPerson.getChildWithName (addressId));
            ValueTree addressData (personData.getChildWithName (addressId));
            addressData.copyPropertiesFrom (newAddress, &undoManager);
        }
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == undoButton)
    {
        //[UserButtonCode_undoButton] -- add your button handler code here..

        // Undo the last transaction.
        undoManager.undo();

        //[/UserButtonCode_undoButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

// Set up some reusable identifiers.
const Identifier EntryForm::personId = "person";
const Identifier EntryForm::firstNameId = "firstName";
const Identifier EntryForm::lastNameId = "lastName";
const Identifier EntryForm::ageId = "age";
const Identifier EntryForm::addressId = "address";
const Identifier EntryForm::line1Id = "line1";
const Identifier EntryForm::line2Id = "line2";
const Identifier EntryForm::line3Id = "line3";

void EntryForm::valueTreePropertyChanged (ValueTree& tree,
                                          const Identifier& property)
{
    // Update the labels when the value tree changes.

    if (property == firstNameId) {
        firstNameField->setText (tree.getProperty (property),
                                 dontSendNotification);
    } else if (property == lastNameId) {
        lastNameField->setText (tree.getProperty (property),
                                dontSendNotification);
    } else if (property == ageId) {
        ageField->setText (tree.getProperty (property),
                           dontSendNotification);
    } else if (property == line1Id) {
        line1Field->setText (tree.getProperty (property),
                             dontSendNotification);
    } else if (property == line2Id) {
        line2Field->setText (tree.getProperty (property),
                             dontSendNotification);
    } else if (property == line3Id) {
        line3Field->setText (tree.getProperty (property),
                             dontSendNotification);
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="EntryForm" componentName=""
                 parentClasses="public Component, public ValueTree::Listener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.33000001311302185059" fixedSize="0"
                 initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff808080"/>
  <LABEL name="firstNameLabel" id="750f083e83698fad" memberName="firstNameLabel"
         virtualName="" explicitFocusOrder="0" pos="8 8 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="First Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="firstNameField" id="fe048625576cb2cb" memberName="firstNameField"
         virtualName="" explicitFocusOrder="0" pos="176 8 376 24" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lastNameLabel" id="c1bdfe71b66f0209" memberName="lastNameLabel"
         virtualName="" explicitFocusOrder="0" pos="8 40 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Last Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lastNameField" id="21babfbe183fe8a9" memberName="lastNameField"
         virtualName="" explicitFocusOrder="0" pos="176 40 376 24" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="ageLabel" id="ce2bf4d63fc5152a" memberName="ageLabel" virtualName=""
         explicitFocusOrder="0" pos="8 72 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Age" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="ageField" id="2971bfeb4b593412" memberName="ageField" virtualName=""
         explicitFocusOrder="0" pos="176 72 376 24" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="addressGroup" id="c31172c85ca89a74" memberName="addressGroup"
                  virtualName="" explicitFocusOrder="0" pos="8 104 544 128" title="Address"/>
  <LABEL name="line1Label" id="94c06ea1524a5f23" memberName="line1Label"
         virtualName="" explicitFocusOrder="0" pos="24 128 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="line1Field" id="4902dc23ef65175e" memberName="line1Field"
         virtualName="" explicitFocusOrder="0" pos="192 128 344 24" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line2Label" id="b5ba7a4288c5df92" memberName="line2Label"
         virtualName="" explicitFocusOrder="0" pos="24 160 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="line2Field" id="99413e4b2d855bce" memberName="line2Field"
         virtualName="" explicitFocusOrder="0" pos="192 160 344 24" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line3Label" id="96128a07091eef88" memberName="line3Label"
         virtualName="" explicitFocusOrder="0" pos="24 192 160 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 3" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="line3Field" id="2ea03e369498d181" memberName="line3Field"
         virtualName="" explicitFocusOrder="0" pos="192 192 344 24" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="saveButton" id="eed662f195612ed3" memberName="saveButton"
              virtualName="" explicitFocusOrder="0" pos="8 240 544 24" buttonText="Save..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="openButton" id="1d88fe6f0fe19216" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="8 272 544 24" buttonText="Open..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="undoButton" id="9d4f7a17e7775924" memberName="undoButton"
              virtualName="" explicitFocusOrder="0" pos="8 304 544 24" buttonText="Undo"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
