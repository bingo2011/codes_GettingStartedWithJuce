#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component
{
public:
    MainContentComponent();
    ~MainContentComponent();
    
    void resized();
    
private:
    OwnedArray<TextButton> buttons;
};

#endif
