#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component,
                             public Button::Listener, // Listen to button clicks.
                             public Thread
{
public:
    MainContentComponent();
    ~MainContentComponent();
    
    void resized();
    
    // Listener callback.
    void buttonClicked (Button* button);
    
    // Thread entry point.
    void run();
    
private:
    TextButton startThreadButton;
    TextButton stopThreadButton;
    Label counterLabel;
    int counter;
};

#endif  // __MAINCOMPONENT_H__
