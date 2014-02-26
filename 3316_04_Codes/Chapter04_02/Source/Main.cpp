#include "../JuceLibraryCode/JuceHeader.h"

// Declare functions.
void writeFile (File const& file);
void readFile (File const& file);

// Main.
int main (int argc, char* argv[])
{
    // Create a file reference in the same directory as the executable.
    File file (File::getSpecialLocation (File::currentExecutableFile)
               .getParentDirectory()
               .getChildFile ("chapter04_02_test.bin"));
    
    // Call the function to write to the file.
    writeFile (file);
    
    // Call the function to read from the file.
    readFile (file);
    
    return 0;
}

// A function to write some data to a file.
void writeFile (File const& file)
{
    Logger *log = Logger::getCurrentLogger();
    
    // Create the output stream from the file.
    FileOutputStream stream (file);
    
    // Check that the stream opened successfully.
    if (!stream.openedOk()) {
        log->writeToLog ("failed to open stream");
        return;
    }
    
    // Set the stream postion to the start of the file.
    stream.setPosition (0);
    
    // Discard any content after the current position.
    stream.truncate();
    
    // Write some data of different types.
    stream.writeInt (1234);
    stream.writeFloat (3.142);
    stream.writeDouble (0.000000001);
}

// A function to read some data from a file.
void readFile (File const& file)
{
    Logger *log = Logger::getCurrentLogger();
    
    // Create the input stream from the file.
    FileInputStream stream (file);
    
    // Check that the stream opened successfully.
    if (!stream.openedOk()) {
        log->writeToLog ("failed to open stream");
        return;
    }
    
    // Read the data from the file and post it to the console.
    log->writeToLog("readInt: " + String (stream.readInt()));
    log->writeToLog("readFloat: " + String (stream.readFloat()));
    log->writeToLog("readDouble: " + String (stream.readDouble()));
}


