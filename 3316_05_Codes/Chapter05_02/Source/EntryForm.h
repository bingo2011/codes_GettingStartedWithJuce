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

#ifndef __JUCE_HEADER_A131E58A3E1F4C14__
#define __JUCE_HEADER_A131E58A3E1F4C14__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
 An auto-generated component, created by the Introjucer.

 Describe your class and how it works here!
                                                                    //[/Comments]
*/
class EntryForm  : public Component,
                   public ValueTree::Listener,
                   public LabelListener,
                   public ButtonListener
{
public:
    //==============================================================================
    EntryForm ();
    ~EntryForm();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void valueTreePropertyChanged (ValueTree& tree,
                                   const Identifier& property);
    void valueTreeChildAdded (ValueTree& parentTree,
                              ValueTree& child)       { }
    void valueTreeChildRemoved (ValueTree& parentTree,
                                ValueTree& child)     { }
    void valueTreeChildOrderChanged (ValueTree& tree) { }
    void valueTreeParentChanged (ValueTree& tree)     { }
    void valueTreeRedirected (ValueTree& tree)        { }
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void labelTextChanged (Label* labelThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    UndoManager undoManager;
    ValueTree personData;
    static const Identifier personId;
    static const Identifier firstNameId;
    static const Identifier lastNameId;
    static const Identifier ageId;
    static const Identifier addressId;
    static const Identifier line1Id;
    static const Identifier line2Id;
    static const Identifier line3Id;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> firstNameLabel;
    ScopedPointer<Label> firstNameField;
    ScopedPointer<Label> lastNameLabel;
    ScopedPointer<Label> lastNameField;
    ScopedPointer<Label> ageLabel;
    ScopedPointer<Label> ageField;
    ScopedPointer<GroupComponent> addressGroup;
    ScopedPointer<Label> line1Label;
    ScopedPointer<Label> line1Field;
    ScopedPointer<Label> line2Label;
    ScopedPointer<Label> line2Field;
    ScopedPointer<Label> line3Label;
    ScopedPointer<Label> line3Field;
    ScopedPointer<TextButton> saveButton;
    ScopedPointer<TextButton> openButton;
    ScopedPointer<TextButton> undoButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EntryForm)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_A131E58A3E1F4C14__
