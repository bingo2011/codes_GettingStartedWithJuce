#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   button1 ("Zero Slider"), // Create a button with text "Zero Slider".
    slider1 (Slider::LinearHorizontal, Slider::NoTextBox) // Disable the numerical label on the slider.
{
    // Set the minumum and maximum range for the slider.
    slider1.setRange (0.0, 100.0);
    
    // Add this class as a listener to the button and slider.
    slider1.addListener (this);
    button1.addListener (this);
    
    // Initialize the slider value, sending any notifcations to listeners.
    slider1.setValue (100.0, sendNotification);
    
    // Add the child components to this parent component.
    addAndMakeVisible (&button1);
    addAndMakeVisible (&slider1);
    addAndMakeVisible (&label1);
    
    // Set the size of this parent component.
    setSize (200, 100);
}

void MainContentComponent::resized()
{
    // Position the child components.
    button1.setBoundsRelative (0.05, 0.05, 0.90, 0.25);
    slider1.setBoundsRelative (0.05, 0.35, 0.90, 0.25);
    label1.setBoundsRelative (0.05, 0.65, 0.90, 0.25);
}

void MainContentComponent::buttonClicked (Button* button)
{
    // Check if this was our button that was clicked and, if so, zero the slider.
    if (&button1 == button)
        slider1.setValue (0.0, sendNotification);
}

void MainContentComponent::sliderValueChanged (Slider* slider)
{
    // Check if this was our slider that changed and, if so, update the label.
    if (&slider1 == slider) {
        label1.setText (String (slider1.getValue()),
                        sendNotification);
    }
}