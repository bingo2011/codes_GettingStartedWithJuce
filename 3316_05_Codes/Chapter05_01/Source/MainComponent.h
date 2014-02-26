#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component
{
public:
    MainContentComponent();
    void resized();
    
private:
    Value value;    // To store the shared value.
    Slider slider; 
    Label label;
};

#endif  // __MAINCOMPONENT_H__
