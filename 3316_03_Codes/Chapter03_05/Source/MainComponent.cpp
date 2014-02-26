#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    // Dynamically allocate the button, slider and label
    button1 = new TextButton ("Zero Slider");
    slider1 = new Slider (Slider::LinearHorizontal, Slider::NoTextBox);
    label1 = new Label();
    
    // Set the slider minimum and maximum values.
    slider1->setRange (0.0, 100.0);
    
    // Listen for slider movements and button clicks.
    slider1->addListener (this);
    button1->addListener (this);
    
    // Set the slider value.
    slider1->setValue (100.0, sendNotification);
    
    // Add the child components to this parent component.
    addAndMakeVisible (button1);
    addAndMakeVisible (slider1);
    addAndMakeVisible (label1);
    
    setSize (200, 100);
}

void MainContentComponent::resized()
{
    // Position the child components.
    button1->setBoundsRelative (0.05, 0.05, 0.90, 0.25);
    slider1->setBoundsRelative (0.05, 0.35, 0.90, 0.25);
    label1->setBoundsRelative (0.05, 0.65, 0.90, 0.25);
}

void MainContentComponent::buttonClicked (Button* button)
{
    // Check if this was our button that was clicked and, if so, zero the slider.
    if (button1 == button)
        slider1->setValue (0.0, sendNotification);
}

void MainContentComponent::sliderValueChanged (Slider* slider)
{
    // Check if this was our slider that changed and, if so, update the label.
    if (slider1 == slider)
        label1->setText (String (slider1->getValue()), sendNotification);
}