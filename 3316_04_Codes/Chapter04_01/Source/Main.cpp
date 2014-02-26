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
               .getChildFile ("chapter04_01_test.txt"));
    
    // Call the function to write to the file.
    writeFile (file);
    
    // Call the function to read from the file.
    readFile (file);
    
    return 0;
}

// A function to write some text to a file.
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
    
    // Set the stream position to the start of the file.
    stream.setPosition (0);
    
    // Discard any content after the current position.
    stream.truncate();
    
    // Create a string.
    String text ("The quick brown fox jumps over the lazy dog.");
    
    // Write the string to the stream.
    bool asUTF16 = false;
    bool byteOrderMark = false;
    stream.writeText (text, asUTF16, byteOrderMark);
}

// A function to read some text from a file.
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
    
    // Read the file as a string.
    log->writeToLog ("fileText: " + stream.readEntireStreamAsString());
}
