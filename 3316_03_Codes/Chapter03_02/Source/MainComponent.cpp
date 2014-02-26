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
        
        // Add the button to the array.
        buttons.add (button);
        
        // Add the button to this parent component.
        addAndMakeVisible (button);
    }
    
    setSize (500, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::resized()
{
    // Create an inset rectangle.
    Rectangle<int> rect (10, 10, getWidth() - 20, getHeight() - 20);
    
    // Calculate the required button height.
    int buttonHeight = rect.getHeight() / buttons.size();
    
    // Distribute the buttons vertically within the inset rectangle.
    for (int i = 0; i < buttons.size(); ++i) {
        buttons[i]->setBounds (rect.getX(),
                               i * buttonHeight + rect.getY(),
                               rect.getWidth(),
                               buttonHeight);
    }
}
