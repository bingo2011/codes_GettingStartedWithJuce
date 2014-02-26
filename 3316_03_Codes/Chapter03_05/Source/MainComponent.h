#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component,
                             public Button::Listener, // Listen for button clicks.
                             public Slider::Listener  // Listen for slider movements.
{
public:
    MainContentComponent();
    void resized();
    
    // Listener callbacks.
    void buttonClicked (Button* button);
    void sliderValueChanged (Slider* slider);
    
private:
    ScopedPointer<Button> button1;
    ScopedPointer<Slider> slider1;
    ScopedPointer<Label> label1;
};

#endif
