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

#include "CustomComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
CustomComponent::CustomComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setButtonText ("Button 1");
    textButton->addListener (this);
    
    addAndMakeVisible (textButton2 = new TextButton ("new button"));
    textButton2->setButtonText ("Button 2");
    textButton2->addListener (this);
    
    addAndMakeVisible (textButton3 = new TextButton ("new button"));
    textButton3->setButtonText ("Button 3");
    textButton3->addListener (this);
    
    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);
    
    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::LinearHorizontal);
    slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider2->addListener (this);
    
    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::LinearHorizontal);
    slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider3->addListener (this);
    
    
    //[UserPreSize]
    //[/UserPreSize]
    
    setSize (600, 400);
    
    
    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

CustomComponent::~CustomComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]
    
    textButton = nullptr;
    textButton2 = nullptr;
    textButton3 = nullptr;
    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    
    
    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CustomComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]
    
    g.fillAll (Colours::white);
    
    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void CustomComponent::resized()
{
    textButton->setBounds (8, 8, 150, 24);
    textButton2->setBounds (8, 40, 150, 24);
    textButton3->setBounds (8, 72, 150, 24);
    slider->setBounds (168, 8, 255, 24);
    slider2->setBounds (168, 40, 255, 24);
    slider3->setBounds (168, 72, 255, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void CustomComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]
    
    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
        //[/UserButtonCode_textButton2]
    }
    else if (buttonThatWasClicked == textButton3)
    {
        //[UserButtonCode_textButton3] -- add your button handler code here..
        //[/UserButtonCode_textButton3]
    }
    
    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void CustomComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]
    
    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    
    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --
 
 This is where the Introjucer stores the metadata that describe this GUI layout, so
 make changes in here at your peril!
 
 BEGIN_JUCER_METADATA
 
 <JUCER_COMPONENT documentType="Component" className="CustomComponent" componentName=""
 parentClasses="public Component" constructorParams="" variableInitialisers=""
 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33000001311302185059"
 fixedSize="0" initialWidth="600" initialHeight="400">
 <BACKGROUND backgroundColour="ffffffff"/>
 <TEXTBUTTON name="new button" id="af174eed89cb5180" memberName="textButton"
 virtualName="" explicitFocusOrder="0" pos="8 8 150 24" buttonText="Button 1"
 connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 <TEXTBUTTON name="new button" id="e82082d50b762aab" memberName="textButton2"
 virtualName="" explicitFocusOrder="0" pos="8 40 150 24" buttonText="Button 2"
 connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 <TEXTBUTTON name="new button" id="3b962399bd7b93d5" memberName="textButton3"
 virtualName="" explicitFocusOrder="0" pos="8 72 150 24" buttonText="Button 3"
 connectedEdges="0" needsCallback="1" radioGroupId="0"/>
 <SLIDER name="new slider" id="3fec9bed511f459f" memberName="slider" virtualName=""
 explicitFocusOrder="0" pos="168 8 255 24" min="0" max="10" int="0"
 style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
 textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
 <SLIDER name="new slider" id="76b0562dd399f1fc" memberName="slider2"
 virtualName="" explicitFocusOrder="0" pos="168 40 255 24" min="0"
 max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
 textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
 <SLIDER name="new slider" id="b7f96c435621ddc1" memberName="slider3"
 virtualName="" explicitFocusOrder="0" pos="168 72 255 24" min="0"
 max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
 textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
 </JUCER_COMPONENT>
 
 END_JUCER_METADATA
 */
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
