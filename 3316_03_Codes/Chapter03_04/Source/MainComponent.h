#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component,
                             public Slider::Listener, // Listen for slider movements.
                             public Label::Listener   // Listen for label changes.
{
public:
    MainContentComponent();
    
    void resized();
    
    // Listener callbacks.
    void sliderValueChanged (Slider* slider);
    void labelTextChanged (Label* label);
    
private:
    OwnedArray<Slider> sliders; // Array of sliders.
    OwnedArray<Label> labels;   // Array of labels.
};

#endif
