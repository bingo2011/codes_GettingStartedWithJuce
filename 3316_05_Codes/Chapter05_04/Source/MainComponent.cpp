#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   menuBar (this) // Pass our class (which is a menu bar model) to the menu bar component.
{
    // Add the menu bar component to this parent component.
    addAndMakeVisible (&menuBar);
    
    // Make the label editable on a single click.
    label.setEditable (true);
    
    // Add the label and slider to this parent component.
    addAndMakeVisible (&label);
    addAndMakeVisible (&slider);
    
    // Set the size of this component.
    setSize (500, 400);
    
    // Set up the properties file options with this application's requirements.
    PropertiesFile::Options options;
    options.applicationName     = ProjectInfo::projectName;
    options.folderName          = ProjectInfo::projectName;
    options.filenameSuffix      = "settings";
    options.osxLibrarySubFolder = "Application Support";
    appProperties.setStorageParameters (options);
    
    // Get the user settings, rather than settings common to all users.
    PropertiesFile* props = appProperties.getUserSettings();
    
    // Initialize the label and slider values.
    label.setText (props->getValue ("label", "<empty>"),
                   dontSendNotification);
    slider.setValue (props->getDoubleValue ("slider", 0.0));
}

MainContentComponent::~MainContentComponent()
{
    // Update the properties as the application closes our component.
    PropertiesFile* props = appProperties.getUserSettings();
    props->setValue ("label", label.getText());
    props->setValue ("slider", slider.getValue());
}

void MainContentComponent::resized()
{
    // Position the child components.
    menuBar.setBounds (0, 0, getWidth(), 20);
    label.setBounds (10, 30, getWidth() - 20, 20);
    slider.setBounds (10, 60, getWidth() - 20, 20);
}

StringArray MainContentComponent::getMenuBarNames()
{
    // Return a string array of the top-level menu bar names.
    
    // Create a null-terminated array of C strings first.
    const char* menuNames[] = { "Label", "Slider", 0 };
    
    // Pass this to the string array which converts it.
    return StringArray (menuNames);
}

PopupMenu MainContentComponent::getMenuForIndex (int index, const String& name)
{
    PopupMenu menu; // The menu that will be returned.
    
    if (name == "Label")
    {
        // Our Label menu will have only one menu item: Clear.
        menu.addItem (LabelClear, "Clear");
        
    } else if (name == "Slider") {
        
        // Our slider has two menu items to set the slider to minimum or maximum.
        menu.addItem (SliderMin, "Set to minimum");
        menu.addItem (SliderMax, "Set to maximum");
        
    }
    
    return menu;
}

void MainContentComponent::menuItemSelected (int menuID,
                                             int index)
{
    // Perform the menu item that was selected.
    
    // Decode its ID
    switch (menuID) {
        case LabelClear:
            // Empty the label.
            label.setText (String::empty, dontSendNotification);
            break;
        case SliderMin:
            // Set the slider to its minimum value.
            slider.setValue (slider.getMinimum());
            break;
        case SliderMax:
            // Set the slider to its maximum value.
            slider.setValue (slider.getMaximum());
            break;
    }
}

