#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent :  public Component,
                              public Button::Listener // Listen for button clicks.
{
public:
    MainContentComponent();
    
    void resized();
    
    // Button listener callback.
    void buttonClicked (Button* button);
    
private:
    OwnedArray<Button> buttons;
    Label label;
};

#endif
