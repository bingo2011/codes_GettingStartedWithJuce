#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    addAndMakeVisible (&embeddedImage);
    setSize (embeddedImage.getWidth(), embeddedImage.getHeight());
}

void MainContentComponent::resized()
{
    embeddedImage.setBounds (0, 0, getWidth(), getHeight());
}
