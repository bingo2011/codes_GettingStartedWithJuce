#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

class Chapter02_03Application  : public JUCEApplication
{
public:
    Chapter02_03Application() {}
    
    const String getApplicationName()       { return ProjectInfo::projectName; }
    const String getApplicationVersion()    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed()       { return true; }
    
    void initialise (const String& commandLine)
    {
        mainWindow = new MainWindow();
    }
    
    void shutdown()
    {
        mainWindow = nullptr; // (deletes our window)
    }
    
    void systemRequestedQuit()
    {
        quit();
    }
    
    void anotherInstanceStarted (const String& commandLine)
    {
    }
    
    class MainWindow    : public DocumentWindow
    {
    public:
        MainWindow()  : DocumentWindow ("MainWindow",
                                        Colours::lightgrey,
                                        DocumentWindow::allButtons)
        {
            setContentOwned (new MainContentComponent(), true);
            centreWithSize (getWidth(), getHeight());
            setVisible (true);
            setResizable (true, true);
        }
        
        void closeButtonPressed()
        {
            JUCEApplication::getInstance()->systemRequestedQuit();
        }
        
    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
    };
    
private:
    ScopedPointer<MainWindow> mainWindow;
};

START_JUCE_APPLICATION (Chapter02_03Application)
