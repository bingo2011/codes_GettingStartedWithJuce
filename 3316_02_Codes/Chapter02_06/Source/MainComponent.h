#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component
{
public:
    MainContentComponent();
    void paint (Graphics& g);
    
    void mouseEnter (const MouseEvent& event);
    void mouseMove (const MouseEvent& event);
    void mouseDown (const MouseEvent& event);
    void mouseDrag (const MouseEvent& event);
    void mouseUp (const MouseEvent& event);
    void mouseExit (const MouseEvent& event);
    
    void handleMouse (const MouseEvent& event);
    
private:
    String text;
    int x, y;
};

#endif
