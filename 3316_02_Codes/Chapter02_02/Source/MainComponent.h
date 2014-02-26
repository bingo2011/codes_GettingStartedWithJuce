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
    TextButton button1;
    Slider slider1;
    Label label1;
};

#endif
