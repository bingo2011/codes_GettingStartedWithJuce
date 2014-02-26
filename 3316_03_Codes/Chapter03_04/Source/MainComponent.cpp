#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    // Create 10 slider-label pairs.
    for (int i = 0; i < 10; ++i) {
        String indexString (i);
        
        // Create the slider.
        String sliderName ("slider" + indexString);
        Slider* slider = new Slider (sliderName);
        slider->setTextBoxStyle (Slider::NoTextBox, false, 0, 0);
        
        // Listen for slider movements.
        slider->addListener (this);
        
        // Add the slider to the slider array.
        sliders.add (slider);
        
        // Add the slider to the parent component.
        addAndMakeVisible (slider);
        
        // Create the label.
        String labelName ("label" + indexString);
        Label* label = new Label (labelName,
                                  String (slider->getValue()));
        
        // Set the label to be editable on a single click.
        label->setEditable (true);
        
        // Listen for label changes.
        label->addListener (this);
        
        // Add the label to the label array.
        labels.add (label);
        
        // Add the label to the parent component.
        addAndMakeVisible (label);
    }
    
    setSize (500, 400);
}

void MainContentComponent::resized()
{
    // Create two sub-rectangles to help position the child components.
    Rectangle<int> slidersRect (10, 10,
                                getWidth() / 2 - 20, getHeight() - 20);
    Rectangle<int> labelsRect (slidersRect.getRight(), 10,
                               getWidth() / 2 - 20, getHeight() - 20);
    
    // Calculate the requried height for the slider-label pairs.
    int cellHeight = slidersRect.getHeight() / sliders.size();
    
    // Position the labels and sliders.
    for (int i = 0; i < sliders.size(); ++i) {
        sliders[i]->setBounds (slidersRect.getX(),
                               i * cellHeight + slidersRect.getY(),
                               slidersRect.getWidth(),
                               cellHeight);
        labels[i]->setBounds (labelsRect.getX(),
                              i * cellHeight + labelsRect.getY(),
                              labelsRect.getWidth(),
                              cellHeight);
    }
}

void MainContentComponent::sliderValueChanged (Slider* slider)
{
    int index = sliders.indexOf (slider);
    labels[index]->setText (String (slider->getValue()),
                            sendNotification);
}

void MainContentComponent::labelTextChanged (Label* label)
{
    int index = labels.indexOf (label);
    sliders[index]->setValue (label->getText().getDoubleValue());
}
