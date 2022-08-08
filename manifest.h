//      PREDEFINED VALUES
//
//  Note: #include this file above "utility.h"

// Specify path to current folder
std::string path;

// Maximum questions that the user would face. (max = 300)
//      Example: =5 --> the user would face 5 questions
unsigned int max_attempt = 30;

// The interval that the questions would be selected out (max = 300)
//      Example: =10 --> 10 first questions will be chosen randomly
unsigned int max_constrain = 300;

// Check operating system
#ifdef _WIN32
std::string os_open = "";
std::string quest_file_dir = "quest_win.txt";
#endif

#ifdef _WIN64
std::string os_open = "";
std::string quest_file_dir = "quest_win.txt";
#endif

#ifdef __APPLE__
std::string os_open = "open";
std::string quest_file_dir = "quest_un.txt";
#endif

#ifdef __linux__
std::string os_open = "open";
std::string quest_file_dir = "quest_un.txt";
#endif

// Utility arrays, DO NOT CHANGE
bool* checked = new bool[300];
char * ans_array = new char[300];
unsigned int needImages[] = {71,72,73,92,193,194,195,211,217,228,246,272};
unsigned int needImages_size = sizeof(needImages)/sizeof(unsigned int);

// Utility, DO NOT CHANGE
std::string ans_file_dir = "ans.txt";