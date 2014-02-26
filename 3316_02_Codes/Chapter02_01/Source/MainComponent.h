#ifndef __MAINCOMPONENT_H_A__
#define __MAINCOMPONENT_H_A__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component
{
public:
    MainContentComponent()
    :   button1 ("Click"),          // Construct a button with label "Click".
        label1 ("label1", "Info")   // Construct a label with text "Info".
    {
        // Set the minimum and maximum value range for the slider.
        slider1.setRange (0.0, 100.0);
        
        // Add these child components to this parent component.
        addAndMakeVisible (&button1);
        addAndMakeVisible (&slider1);
        addAndMakeVisible (&label1);
        
        // Set this component's size.
        setSize (200, 100);
    }
    
    void resized()
    {
        // position the child components
        button1.setBoundsRelative (0.05, 0.05, 0.90, 0.25);
        slider1.setBoundsRelative (0.05, 0.35, 0.90, 0.25);
        label1.setBoundsRelative (0.05, 0.65, 0.90, 0.25);
    }
    
private:
    TextButton button1;
    Slider slider1;
    Label label1;
};


#endif  // __MAINCOMPONENT_H_A07E3263__
