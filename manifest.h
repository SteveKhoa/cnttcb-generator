//      PREDEFINED VALUES
//
//  Note: #include this file above "utility.h"


// Change this according to user's OS
// On Windows: "" (leave it blank)
// On Linux or MacOS: "open"
std::string os_open = "open";


// Maximum questions that the user would face. (max = 300)
//      Example: =5 --> the user would face 5 questions
unsigned int max_attempt = 30;

// The interval that the questions would be selected out (max = 300)
//      Example: =10 --> 10 first questions will be chosen randomly
unsigned int max_constrain = 300;

//
// On Windows: "quest_win.txt"
// On Linux or MacOS: "quest.txt"
std::string quest_file_dir = "quest_un.txt";













// Utility arrays, DO NOT CHANGE
bool* checked = new bool[300];
char * ans_array = new char[300];
unsigned int needImages[] = {71,72,73,92,193,194,195,211,217,228,246,272};
unsigned int needImages_size = sizeof(needImages)/sizeof(unsigned int);