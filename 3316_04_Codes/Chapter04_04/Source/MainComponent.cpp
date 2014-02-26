#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    // Add the player component as a child.
    addAndMakeVisible (&player);
    
    // Resize this component.
    setSize (player.getWidth(), player.getHeight());
}

void MainContentComponent::resized()
{
    // Resize the player.
    player.setBounds (0, 0, getWidth(), getHeight());
}