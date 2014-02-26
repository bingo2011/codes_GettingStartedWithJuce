#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

// A simple class derived from Label to filter data entry.
// This limits the data to numerical data only.
class NumericalLabel : public Label
{
public:
    void editorShown (TextEditor* editor)
    {
        editor->setInputRestrictions (0, "-0123456789.");
    }
};

class MainContentComponent : public Component,
                             public Button::Listener,  // Listen for button clicks.
                             public Slider::Listener,  // Listen for slider movements.
                             public Label::Listener    // Listen for label changes.
{
public:
    MainContentComponent();
    void resized();
    
    // Listener callbacks.
    void buttonClicked (Button* button);
    void sliderValueChanged (Slider* slider);
    void labelTextChanged (Label* label);
    
private:
    TextButton button1;
    Slider slider1;
    NumericalLabel label1;
};

#endif
