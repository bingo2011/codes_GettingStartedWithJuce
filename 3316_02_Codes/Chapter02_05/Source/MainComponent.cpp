#include "MainComponent.h"

MainContentComponent::MainContentComponent()
{
    setSize (200, 200);
}

/*
 Uncomment ONE of these MainContentComponent::paint() functions at a time.
 
 In Xcode, select all the lines you wish to comment or uncomment and use key
 command Command-/ to toggle the selected text to commented or uncommented. It
 may get confused if some lines in the selection are already commented and some
 are not. This adds or removes C++ style // comments at the start of each 
 selected line.
 
 In Microsoft Visual Studio, select all the lines you wish to comment and use
 key commands Ctrl-K followed immediately by Ctrl-C. To uncomment lines, select
 all the lines that are already commented starting with // and use key commands
 Ctrl-K followed immediately by Ctrl-U. Again, these techniques add or remove 
 C++ style // comments to the start of each selected line.
 */

/* Random rectangles */
void MainContentComponent::paint (Graphics& g)
{
    // Get the global, "system" random number generator.
    Random& r (Random::getSystemRandom());
    
    // Fill the whole component backrgound with blue.
    g.fillAll (Colours::cornflowerblue);
    
    // Iterate over this loop 20 times.
    for (int i = 0; i < 20; ++i) {
        // Set a random color.
        g.setColour (Colour (r.nextFloat(),
                             r.nextFloat(),
                             r.nextFloat(),
                             r.nextFloat()));
        
        // Calculate the geometry.
        const int width = r.nextInt (getWidth() / 4);
        const int height = r.nextInt (getHeight() / 4);
        const int left = r.nextInt (getWidth() - width);
        const int top = r.nextInt (getHeight() - height);
        
        // Draw a filled rectangle.
        g.fillRect (left, top, width, height);
    }
}

///* Random ellipses */
//void MainContentComponent::paint (Graphics& g)
//{
//    // Get the global, "system" random number generator.
//    Random& r (Random::getSystemRandom());
//
//    // Fill the whole component backrgound with blue.
//    g.fillAll (Colours::cornflowerblue);
//
//    // Iterate over this loop 20 times.
//    for (int i = 0; i < 20; ++i) {
//        // Set a random color.
//        g.setColour (Colour (r.nextFloat(),
//                             r.nextFloat(),
//                             r.nextFloat(),
//                             r.nextFloat()));
//
//        // Calculate the geometry.
//        const int width = r.nextInt (getWidth() / 4);
//        const int height = r.nextInt (getHeight() / 4);
//        const int left = r.nextInt (getWidth() - width);
//        const int top = r.nextInt (getHeight() - height);
//
//        // Draw a filled ellipse.
//        g.fillEllipse (left, top, width, height);
//    }
//}

///* Random lines */
//void MainContentComponent::paint (Graphics& g)
//{
//    // Get the global, "system" random number generator.
//    Random& r (Random::getSystemRandom());
//
//    // Fill the whole component backrgound with blue.
//    g.fillAll (Colours::cornflowerblue);
//
//    // Choose a random line thickness.
//    const float lineThickness = r.nextFloat() * 5.f + 1.f;
//
//    // Iterate over this loop 20 times.
//    for (int i = 0; i < 20; ++i) {
//        // Set a random color.
//        g.setColour (Colour (r.nextFloat(),
//                             r.nextFloat(),
//                             r.nextFloat(),
//                             r.nextFloat()));
//
//        // Calculate line starts and ends.
//        const float startX = r.nextFloat() * getWidth();
//        const float startY = r.nextFloat() * getHeight();
//        const float endX = r.nextFloat() * getWidth();
//        const float endY = r.nextFloat() * getHeight();
//
//        // Draw the line.
//        g.drawLine (startX, startY,
//                    endX, endY,
//                    lineThickness);
//    }
//}


///* Random line segments */
//void MainContentComponent::paint (Graphics& g)
//{
//    // Get the global, "system" random number generator.
//    Random& r (Random::getSystemRandom());
//
//    // Fill the whole component backrgound with blue.
//    g.fillAll (Colours::cornflowerblue);
//
//    // Choose a random line thickness.
//    const float lineThickness = r.nextFloat() * 5.f + 1.f;
//
//    // Choose a random start point.
//    float x1 = r.nextFloat() * getWidth();
//    float y1 = r.nextFloat() * getHeight();
//
//    // Iterate over this loop 20 times.
//    for (int i = 0; i < 20; ++i) {
//        // Set a random color.
//        g.setColour (Colour (r.nextFloat(),
//                             r.nextFloat(),
//                             r.nextFloat(),
//                             r.nextFloat()));
//
//        // Choose the next random point.
//        const float x2 = r.nextFloat() * getWidth();
//        const float y2 = r.nextFloat() * getHeight();
//
//        // Draw the next line segment.
//        g.drawLine (x1, y1, x2, y2, lineThickness);
//
//        // Remember the point for the next iteration.
//        x1 = x2;
//        y1 = y2;
//    }
//}

///* Random line segments using a Path object. */
//void MainContentComponent::paint (Graphics& g)
//{
//    // Get the global, "system" random number generator.
//    Random& r (Random::getSystemRandom());
//    
//    // Fill the whole component backrgound with blue.
//    g.fillAll (Colours::cornflowerblue);
//    
//    // Allocate and start a new path at a random point.
//    Path path;
//    path.startNewSubPath (r.nextFloat() * getWidth(),
//                          r.nextFloat() * getHeight());
//    
//    // Iterate over this loop 20 times.
//    for (int i = 0; i < 20; ++i) {
//        // Add a line to the path to a random point.
//        path.lineTo (r.nextFloat() * getWidth(),
//                     r.nextFloat() * getHeight());
//    }
//    
//    // Set a random color
//    g.setColour (Colour (r.nextFloat(),
//                         r.nextFloat(),
//                         r.nextFloat(),
//                         r.nextFloat()));
//    
//    // Choose a random line thickness.
//    const float lineThickness = r.nextFloat() * 5.f + 1.f;
//    
//    // Draw the path.
//    g.strokePath (path, PathStrokeType (lineThickness));
//}

