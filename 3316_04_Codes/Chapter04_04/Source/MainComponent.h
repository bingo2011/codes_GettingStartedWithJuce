#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include "MediaPlayer.h"

class MainContentComponent   : public Component
{
public:
    MainContentComponent();
    void resized();
    
private:
    MediaPlayer player;
};

#endif
