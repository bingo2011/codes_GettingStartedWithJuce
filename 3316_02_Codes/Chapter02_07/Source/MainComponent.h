#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include "CustomComponent.h"

class MainContentComponent : public Component
{
public:
    MainContentComponent();
    
private:
    CustomComponent custom;
};

#endif
