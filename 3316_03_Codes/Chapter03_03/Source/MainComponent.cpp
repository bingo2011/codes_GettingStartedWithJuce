#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    // Create 10 buttons.
    for (int i = 0; i < 10; ++i) {
        // Construct a button name based on the loop counter.
        String buttonName;
        buttonName << "Button " << String (i);
        
        // Create a button.
        TextButton* button = new TextButton (buttonName);
        
        // Listen for button clicks.
        button->addListener (this);
        
        // Add the button to the array.
        buttons.add (button);
        
        // Add the button to this parent component.
        addAndMakeVisible (button);
    }
    
    // Add the label to this parent component.
    addAndMakeVisible (&label);
    
    // Configure the label text display.
    label.setJustificationType (Justification::centred);
    label.setText ("no buttons clicked", dontSendNotification);
    
    setSize (500, 400);
}

void MainContentComponent::resized()
{
    // Create an inset rectangle on the left hand side.
    Rectangle<int> rect (10, 10, getWidth() / 2 - 20, getHeight() - 20);
    
    // Calculate the required button height.
    int buttonHeight = rect.getHeight() / buttons.size();
    
    // Distribute the buttons vertically within the inset rectangle.
    for (int i = 0; i < buttons.size(); ++i) {
        buttons[i]->setBounds (rect.getX(),
                               i * buttonHeight + rect.getY(),
                               rect.getWidth(),
                               buttonHeight);
    }
    
    // Position the label on the right.
    label.setBounds (rect.getRight(),
                     rect.getY(),
                     getWidth() - rect.getWidth() - 10,
                     20);
}

void MainContentComponent::buttonClicked (Button* button)
{
    // Update the label to indicate which button was clicked.
    String labelText;
    int buttonIndex = buttons.indexOf (button);
    labelText << "Button clicked: " << String (buttonIndex);
    label.setText (labelText, dontSendNotification);
}
