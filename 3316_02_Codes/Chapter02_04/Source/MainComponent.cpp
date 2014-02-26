#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   slider1 (Slider::LinearHorizontal, Slider::TextBoxLeft),
    slider2 (Slider::LinearHorizontal, Slider::TextBoxLeft),
    toggle1 ("Slider style: Linear Bar")
{
    // Set a cusom look-and-feel.
    setLookAndFeel (&altLookAndFeel);
    
    // Add this class as a listener to the toggle button.
    toggle1.addListener (this);
    
    // Add the child components to this parent component.
    addAndMakeVisible (&slider1);
    addAndMakeVisible (&slider2);
    addAndMakeVisible (&toggle1);
    
    // Set the size of this parent component.
    setSize (400, 200);
}

void MainContentComponent::resized()
{
    // Position the child components.
    slider1.setBounds (10, 10, getWidth() - 20, 20);
    slider2.setBounds (10, 40, getWidth() - 20, 20);
    toggle1.setBounds (10, 70, getWidth() - 20, 20);
}

void MainContentComponent::buttonClicked (Button* button)
{
    if (&toggle1 == button) {
        if (toggle1.getToggleState()) {
            // The toggle button was turn on, use the linear bar style.
            slider1.setSliderStyle (Slider::LinearBar);
            slider2.setSliderStyle (Slider::LinearBar);
        } else {
            // The toggle button was turn off, use the linear horizontal style.
            slider1.setSliderStyle (Slider::LinearHorizontal);
            slider2.setSliderStyle (Slider::LinearHorizontal);
        }
    }
}
