#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   value (1.0),  // Initialize value.
    slider (Slider::LinearHorizontal, Slider::NoTextBox)
{
    // Set label to be editable on a single click.
    label.setEditable (true);
    
    // Set the slider and label to refer to the shared value.
    slider.getValueObject().referTo (value);
    label.getTextValue().referTo (value);
    
    // Add child components to this parent component.
    addAndMakeVisible (&slider);
    addAndMakeVisible (&label);
    
    setSize (500, 400);
}

void MainContentComponent::resized()
{
    // Position child components.
    slider.setBounds (10, 10, getWidth() - 20, 20);
    label.setBounds (10, 40, getWidth() - 20, 20);
}
