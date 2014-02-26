#include "../JuceLibraryCode/JuceHeader.h"

/*
 Uncomment ONE of these main() functions at a time.
 
 In Xcode, select all the lines you wish to comment or uncomment and use key
 command Command-/ to toggle the selected text to commented or uncommented. It
 may get confused if some lines in the selection are already commented and some
 are not. This adds or removes C++ style // comments at the start of each
 selected line.
 
 In Microsoft Visual Studio, select all the lines you wish to comment and use
 key commands Ctrl-K followed immediately by Ctrl-C. To uncomment lines, select
 all the lines that are already commented starting with // and use key commands
 Ctrl-K followed immediately by Ctrl-U. Again, these techniques add or remove
 C++ style // comments at the start of each selected line.
 */

/* Post "Hello world!" to the console. */
int main (int argc, char* argv[])
{
    Logger *log = Logger::getCurrentLogger();
    String message ("Hello world!");
    log->writeToLog (message);
    
    return 0;
}

///* Concatenate strings into longer strings using the + operator. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    String hello ("Hello");
//    String space (" ");
//    String world ("world!");
//    String message = hello + space + world;
//    
//    log->writeToLog (message);
//    
//    return 0;
//}

///* Concatenate strings using the stream operator << */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    String hello ("Hello");
//    String space (" ");
//    String world ("world!");
//    String message;
//    
//    message << hello;
//    message << space;
//    message << world;
//    
//    log->writeToLog (message);
//    
//    return 0;
//}

///* Concatenate strings into longer strings using the += operator. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    String hello ("Hello");
//    String space (" ");
//    String world ("world!");
//    String message;
//    
//    message += hello;
//    message += space;
//    message += world;
//    
//    log->writeToLog (message);
//    
//    return 0;
//}

///* Chaining together << operators on a single line. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    String message;
//    
//    message << "Hello" << " " << "world!";
//    
//    log->writeToLog (message);
//    
//    return 0;
//}

///* Chaining together += operators on a single line (to illustrate how messy it looks). */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    String message;
//    
//    (((message += "Hello") += " ") += "world!");
//    
//    log->writeToLog (message);
//    
//    return 0;
//}

///* Illustrating the reference-counted storage of strings. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    String string1 ("Hello");
//    String string2 = string1;
//    
//    string1 << " world!";
//    
//    log->writeToLog ("string1: " + string1);
//    log->writeToLog ("string2: " + string2);
//    
//    return 0;
//}

///* Displaying the time. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    Time time (Time::getCurrentTime());
//    
//    bool includeDate = true;
//    bool includeTime = true;
//    bool includeSeconds = true;
//    bool use24HourClock = true;
//    
//    String timeStr (time.toString (includeDate, includeTime,
//                                   includeSeconds, use24HourClock));
//    
//    log->writeToLog ("the time is: " + timeStr);
//    
//    return 0;
//}

///* Formatting time and date information using Time::formatted(). */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    Time time (Time::getCurrentTime());
//    String timeStr (time.formatted ("%d %b %Y %H:%M:%S"));
//    
//    log->writeToLog ("the time is: " + timeStr);
//    
//    return 0;
//}

///* Manipulating time values. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    Time time (Time::getCurrentTime());
//    RelativeTime oneHour (RelativeTime::hours (1));
//    
//    Time oneHourAgo (time - oneHour);
//    Time inOneHour (time + oneHour);
//    Time inTwoHours (inOneHour + oneHour);
//    
//    log->writeToLog ("the time is:             " +
//                     time.toString (true, true, true, true));
//    log->writeToLog ("one hour ago was:        " +
//                     oneHourAgo.toString (true, true, true, true));
//    log->writeToLog ("in one hour it will be:  " +
//                     inOneHour.toString (true, true, true, true));
//    log->writeToLog ("in two hours it will be: " +
//                     inTwoHours.toString (true, true, true, true));
//    
//    return 0;
//}

///* Waiting for a certain moment in time. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    uint32 now = Time::getMillisecondCounter();
//    uint32 trigger = now + 5000;
//    
//    log->writeToLog ("the time is now: " +
//                     String (now) + "ms");
//    
//    while (Time::getMillisecondCounter() < trigger) {
//        Thread::sleep (10);
//        log->writeToLog ("waiting...");
//    }
//    
//    log->writeToLog ("the time has reached: " +
//                     String (trigger) + "ms");
//    
//    return 0;
//}

///* Measuring how long thing take to happen. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    double start = Time::getMillisecondCounterHiRes();
//    
//    log->writeToLog ("the time is now: " +
//                     String (start) + "ms");
//    
//    float value = 0.f;
//    const int N = 10000;
//    
//    for (int i = 0; i < N; ++i)
//        value += 0.1f;
//    
//    double duration = Time::getMillisecondCounterHiRes() - start;
//    
//    log->writeToLog ("the time taken to perform " + String (N) +
//                     " additions was: " + String (duration) + "ms");
//    
//    return 0;
//}

///* Writing a text file. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    String text ("The quick brown fox jumps over the lazy dog.");
//    File file ("./chapter03_01_test.txt");
//    file.replaceWithText (text);
//    String fileText = file.loadFileAsString();
//    
//    log->writeToLog ("fileText: " + fileText);
//    
//    return 0;
//}

///* Writing a text file to a specific location. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    String text ("The quick brown fox jumps over the lazy dog.");
//    File exe (File::getSpecialLocation (File::currentExecutableFile));
//    File exeDir (exe.getParentDirectory());
//    File file (exeDir.getChildFile ("chapter03_01_test.txt"));
//    file.replaceWithText (text);
//    String fileText = file.loadFileAsString();
//    
//    log->writeToLog ("fileText: " + fileText);
//    
//    return 0;
//}

///* Writing then reading a text file. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    String text ("The quick brown fox jumps over the lazy dog.");
//    File file (File::getSpecialLocation (File::currentExecutableFile)
//               .getParentDirectory()
//               .getChildFile ("chapter03_01_test.txt"));
//    file.replaceWithText (text);
//    String fileText = file.loadFileAsString();
//    
//    log->writeToLog ("fileText: " + fileText);
//    
//    return 0;
//}

///* Discovering the full path of a file. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    File file (File::getSpecialLocation (File::currentExecutableFile)
//               .getParentDirectory()
//               .getChildFile ("chapter03_01_test.txt"));
//    log->writeToLog ("file path: " + file.getFullPathName());
//    
//    return 0;
//}

///* Obtaining certain information about a file. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    File file (File::getSpecialLocation (File::currentExecutableFile)
//               .getParentDirectory()
//               .getChildFile ("chapter03_01_test.txt"));
//    
//    bool fileExists = file.exists();
//    
//    if (!fileExists) {
//        log->writeToLog ("file " +
//                         file.getFileName() +
//                         " does not exist");
//        return -1;
//    }
//    
//    Time creationTime = file.getCreationTime();
//    Time modTime = file.getLastModificationTime();
//    int64 size = file.getSize();
//    
//    log->writeToLog ("file " +
//                     file.getFileName() + " info:");
//    log->writeToLog ("  created : " +
//                     creationTime.toString (true, true, true, true));
//    log->writeToLog ("  modified: " +
//                     modTime.toString (true, true, true, true));
//    log->writeToLog ("  size    : " +
//                     String (size) + " bytes");
//    
//    return 0;
//}

///* Navigating directory structures. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    File root (File::getSpecialLocation (File::userDesktopDirectory)
//               .getChildFile ("Chapter03_01_tests"));
//    File dir1 (root.getChildFile ("1"));
//    File dir2 (root.getChildFile ("2"));
//    File dir1a (dir1.getChildFile ("a"));
//    File dir2b (dir2.getChildFile ("b"));
//    
//    Result result (Result::ok());
//    
//    result = dir1a.createDirectory();
//    
//    if (!result.wasOk()) {
//        log->writeToLog ("Creating dir 1/a failed");
//        return -1;
//    }
//    
//    result = dir2b.createDirectory();
//    
//    if (!result.wasOk()) {
//        log->writeToLog ("Creating dir 2/b failed");
//        return -1;
//    }
//    
//    File rel = dir1a.getChildFile ("../../2/b");
//    
//    log->writeToLog ("root: " + root.getFullPathName());
//    log->writeToLog ("dir1: " + dir1.getRelativePathFrom (root));
//    log->writeToLog ("dir2: " + dir2.getRelativePathFrom (root));
//    log->writeToLog ("dir1a: " + dir1a.getRelativePathFrom (root));
//    log->writeToLog ("dir2b: " + dir2b.getRelativePathFrom (root));
//    log->writeToLog ("rel: " + rel.getRelativePathFrom (root));
//    
//    return 0;
//}

///* Using dynamic arrays with built-in index bounds checking. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    Array<int> array;
//    
//    for (int i = 0; i < 5; ++i)
//        array.add (i * 1000);
//    
//    for (int i = 0; i < array.size(); ++i) {
//        int value = array[i];
//        log->writeToLog("array[" + String (i) + "] = " + String (value));
//    }
//    
//    return 0;
//}

///* Using dynamic arrays without bounds checking. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    Array<int> array;
//    
//    for (int i = 0; i < 5; ++i)
//        array.add (i * 1000);
//    
//    for (int i = 0; i < array.size(); ++i) {
//        int value = array.getUnchecked (i);
//        log->writeToLog("array[" + String (i) + "] = " + String (value));
//    }
//    
//    return 0;
//}

///* Listing files in a directory. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    File file =
//    File::getSpecialLocation (File::userDocumentsDirectory);
//    
//    Array<File> childFiles;
//    
//    bool searchRecursively = false;
//    file.findChildFiles (childFiles,
//                         File::findFilesAndDirectories,
//                         searchRecursively);
//    
//    for (int i = 0; i < childFiles.size(); ++i)
//        log->writeToLog (childFiles[i].getFullPathName());
//    
//    return 0;
//}

///* Tokenizing strings. */
//int main (int argc, char* argv[])
//{
//    Logger *log = Logger::getCurrentLogger();
//    
//    StringArray strings;
//    bool preserveQuoted = true;
//    strings.addTokens("one two three four five six", preserveQuoted);
//    
//    for (int i = 0; i < strings.size(); ++i) {
//        log->writeToLog ("strings[" + String (i) + "]=" +
//                         strings[i]);
//    }
//    
//    return 0;
//}
