#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   readFileButton ("Read Image File..."),  // Create the read button.
    writeFileButton ("Write Image File...") // Create the write button.
{
    // Set the brightness slider range to -1...1
    brightnessSlider.setRange (-1.0, 1.0);
    
    // Add the child components to this parent component.
    addAndMakeVisible (&readFileButton);
    addAndMakeVisible (&imageComponent);
    addAndMakeVisible (&brightnessSlider);
    addAndMakeVisible (&writeFileButton);
    
    // Make this class listen for button clicks.
    readFileButton.addListener (this);
    writeFileButton.addListener (this);
    brightnessSlider.addListener (this);
    
    setSize (500, 400);
}

void MainContentComponent::resized()
{
    // Position the child components.
    int controlHeight = 20;
    int margin = 10;
    int width = getWidth() - margin * 2;
    
    readFileButton.setBounds (margin, margin, width, controlHeight);
    imageComponent.setBounds (margin,
                              readFileButton.getBottom() + margin,
                              width,
                              getHeight() - (controlHeight + margin) * 3 - margin * 2);
    brightnessSlider.setBounds (margin, imageComponent.getBottom() + margin,
                                width, controlHeight);
    writeFileButton.setBounds (margin, brightnessSlider.getBottom() + margin,
                               width, controlHeight);
}

void MainContentComponent::buttonClicked (Button* button)
{
    if (&readFileButton == button) {
        // Present a file chooser for the user to choose a file to read.
        FileChooser chooser ("Choose an image file to display...");
        
        if (chooser.browseForFileToOpen()) {
            // The user chose a file, try to load this as an image.
            origImage = ImageFileFormat::loadFrom (chooser.getResult());
            
            if (origImage.isValid()) {
                // The image was valid, make a deep copy of it.
                procImage = origImage.createCopy();
                
                // Display the copied image.
                imageComponent.setImage (procImage);
            }
        }
    } else if (&writeFileButton == button) {
        if (procImage.isValid()) {
            // Present a file chooser for the user to choose a file to write.
            FileChooser chooser ("Write processed image to file...");
            
            if (chooser.browseForFileToSave (true)) {
                // The user chose a file, create a stream.
                FileOutputStream stream (chooser.getResult());
                
                // Save the processed image as a PNG file.
                PNGImageFormat pngImageFormat;
                pngImageFormat.writeImageToStream (procImage, stream);
            }
        }
    }
}

void MainContentComponent::sliderValueChanged (Slider* slider)
{
    if (&brightnessSlider == slider) {
        // Check that both images are valid, that is, they exist.
        if (origImage.isValid() &&
            procImage.isValid()) {
            
            // Get the current value of the brightness slider.
            const float amount = (float)brightnessSlider.getValue();
            
            if (amount == 0.f) {
                // The amount is zero, just make a deep copy of the original.
                procImage = origImage.createCopy();
            } else {
                // Scan each pixel in the image.
                for (int v = 0; v < origImage.getHeight(); ++v) {
                    for (int h = 0; h < origImage.getWidth(); ++h) {
                        // Get the current pixel color.
                        Colour col = origImage.getPixelAt (h, v);
                        
                        // Create a new color based on the brightness.
                        if (amount > 0.f)
                            procImage.setPixelAt (h, v, col.brighter (amount));
                        else if (amount < 0.f)
                            procImage.setPixelAt (h, v, col.darker (-amount));
                    }
                }
            }
            
            // Force the image component to refresh as soon as possible.
            imageComponent.repaint();
        }
    }
}
