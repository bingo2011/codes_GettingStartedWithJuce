#include "MainComponent.h"

MainContentComponent::MainContentComponent()
:   Thread ("Counter Thread"), // Create a thread with a specific name.
    startThreadButton ("Start Thread"), // Create the start button.
    stopThreadButton ("Stop Thread"), // Create the stop button.
    counter (0) // Initialize the counter.
{
    // Add the child components to this parent component.
    addAndMakeVisible (&startThreadButton);
    addAndMakeVisible (&stopThreadButton);
    addAndMakeVisible (&counterLabel);
    
    // Listen to the buttons.
    startThreadButton.addListener (this);
    stopThreadButton.addListener (this);
    
    setSize (500, 400);
}

MainContentComponent::~MainContentComponent()
{
    // Stop the thread if it is running before we exit.
    if (isThreadRunning())
        stopThread (3000);
}

void MainContentComponent::resized()
{
    // Position the child components.
    startThreadButton.setBounds (10, 10, getWidth() - 20, 20);
    stopThreadButton.setBounds (10, 40, getWidth() - 20, 20);
    counterLabel.setBounds (10, 70, getWidth() - 20, 20);
}

void MainContentComponent::buttonClicked (Button* button)
{
    if (&startThreadButton == button)
    {
        // Start the thread (this will have no effect if it is already started).
        startThread();
    }
    else if (&stopThreadButton == button)
    {
        // Stop the thread if it is running.
        if (isThreadRunning())
            stopThread (3000);
    }
}


///* Incorrect technique */
//void MainContentComponent::run()
//{
//    while (!threadShouldExit())
//    {
//        // Incorrect, you can't call Label::setText() directly from this thread.
//        counterLabel.setText (String (counter++),
//                              dontSendNotification);
//    }
//}

void MainContentComponent::run()
{
    // This is your thread's entry point.
    
    // Loop until the thread has been told to stop.
    while (!threadShouldExit())
    {
        // Try to obtain the message manager lock before we interact with GUI
        // objects in this thread.
        const MessageManagerLock lock (Thread::getCurrentThread());
        
        if (lock.lockWasGained())
        {
            // It is now safe to set the label text.
            counterLabel.setText (String (counter++),
                                  dontSendNotification);
        }
        
        // The message manager lock is unlocked at this point (if we locked) as
        // it goes out of scope here.
    }
}

