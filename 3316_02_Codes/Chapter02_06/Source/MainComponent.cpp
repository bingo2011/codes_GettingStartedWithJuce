#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   x (0), y (0)
{
    setSize (200, 200);
}

void MainContentComponent::paint (Graphics& g)
{
    // Fill the whole component backrgound with blue.
    g.fillAll (Colours::cornflowerblue);
    
    // Set the drawing color to a yellowy-green color.
    g.setColour (Colours::yellowgreen);
    
    // Set the font to the default font at 24-point size.
    g.setFont (Font (24));
    
    // Draw the contents of the 'text' string in the center.
    g.drawText (text, 0, 0, getWidth(), getHeight(),
                Justification::centred, false);
    
    // Set the drawing color to a yellow.
    g.setColour (Colours::yellow);
    
    // Draw a circle under the current mouse position.
    const float radius = 10.f;
    g.fillEllipse (x - radius, y - radius,
                   radius * 2.f, radius * 2.f);
}

void MainContentComponent::mouseEnter (const MouseEvent& event)
{
    // The mouse pointer entered our component bounds.
    text = "mouse enter";
    handleMouse (event);
}

void MainContentComponent::mouseMove (const MouseEvent& event)
{
    // The mouse pointer moved within our component bounds.
    text = "mouse move";
    handleMouse (event);
}

void MainContentComponent::mouseDown (const MouseEvent& event)
{
    // A mouse button was clicked within our component bounds.
    text = "mouse down";
    handleMouse (event);
}

void MainContentComponent::mouseDrag (const MouseEvent& event)
{
    // The mouse was dragged following a click within our component bounds.
    text = "mouse drag";
    handleMouse (event);
}

void MainContentComponent::mouseUp (const MouseEvent& event)
{
    // The mouse button was released following a click or drag.
    text = "mouse up";
    handleMouse (event);
}

void MainContentComponent::mouseExit (const MouseEvent& event)
{
    // The mouse left the our component bounds (or a mouse button was released following a drag).
    text = "mouse exit";
    handleMouse (event);
}

void MainContentComponent::handleMouse (const MouseEvent& event)
{
    // Update the store position.
    x = event.x;
    y = event.y;
    
    // Force the component to redraw as soon as possible.
    repaint();
}
