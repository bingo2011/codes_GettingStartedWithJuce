#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    addAndMakeVisible (&custom);
    setSize (custom.getWidth(), custom.getHeight());
}
