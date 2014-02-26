#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component,
                             public Button::Listener // Listen for button clicks.
{
public:
    MainContentComponent();
    void resized();
    
    // Listener callback.
    void buttonClicked (Button* button);
    
    // Create an alternaive look-and-feel for this component.
    class AltLookAndFeel : public LookAndFeel
    {
    public:
        AltLookAndFeel()
        {
            // All slider thumbs will be red for this look-and-feel.
            setColour (Slider::thumbColourId, Colours::red);
        }
    };
    
private:
    Slider slider1;
    Slider slider2;
    ToggleButton toggle1;
    AltLookAndFeel altLookAndFeel;
};

#endif
