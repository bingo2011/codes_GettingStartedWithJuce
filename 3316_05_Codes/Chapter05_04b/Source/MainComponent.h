#ifndef __MAINCOMPONENT_H__
#define __MAINCOMPONENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent : public Component,
                             public MenuBarModel // Act as a menu bar model.
{
public:
    MainContentComponent();
    ~MainContentComponent();
    
    void resized();
    
    // Menu bar model pure virtual functions.
    StringArray getMenuBarNames();
    PopupMenu getMenuForIndex (int index, const String& name);
    void menuItemSelected (int menuID, int index);
    
    // Convenient constant IDs for the menu items.
    enum MenuIDs {
        LabelClear = 1000,
        SliderMin,
        SliderMax
    };
    
private:
    Label label;
    Slider slider;
    ScopedPointer<MenuBarComponent> menuBar; // ScopedPointer so that this component may be optional
    ApplicationProperties appProperties; // Store application properties.
};

#endif  // __MAINCOMPONENT_H__
