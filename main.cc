#include <iostream>
#include <cstdlib>
#include <fstream>

#include "manifest.h"
#include "utility.h"

// TO-DO:
// add functionality: open images for questions that has images.

int main()
{
    // @brief temporarily store current string
    std::string curr_str;

    // @brief get seed of random
    srand(time(0));

    // @brief initialize boolean array -> false.
    for (int i = 0; i < 300; ++i)
    {
        checked[i] = false;
    }

    // @brief open input files: ans.txt and quest.txt
    std::ifstream quest_file;
    std::ifstream ans_file;
    quest_file.open(quest_file_dir);
    if (!quest_file.is_open())
    {
        throw std::runtime_error("Khong tim thay file quest.txt!");
    }
    ans_file.open("ans.txt");
    if (!ans_file.is_open())
    {
        throw std::runtime_error("Khong tim thay file ans.txt!");
    }










    // @brief Randomly getting the values, and hash them into "checked"-array.
    //          Also, getting the max_idx (used in predicting maximum looping range for quest.txt reading)
    unsigned int max_idx = 0;
    for (int i = 0; i < max_attempt; ++i)
    {
        int quest_num = getRandomNum();
        while (!validRandomNum(quest_num))
        {
            quest_num = getRandomNum();
        }
        checked[quest_num - 1] = true; // hash into the boolean array

        max_idx = max_num(quest_num, max_idx);
    }

    // @brief Loading answers to ans_array from ans.txt
    for (int i = 0 ; i < 300 ; ++i)
    {
        ans_file >> ans_array[i];
    }









    // @brief Build an sample exam.
    //
    //  @param  line_limit: determine maximum number of lines "reader" has to traversed through.
    //          reader: traversing the input file: quest.txt

    //  functionality: NOT READ ACROSS THIS LINE
    unsigned int line_limit = (max_idx - 1) * 5 + 1 + 5;
    unsigned int reader = 1;
    unsigned int quest_idx = 1;

    // Keep track with the number of questions done by users.
    unsigned int attempt = 0;

    while (reader < line_limit && attempt < max_attempt)
    {
        if (checked[quest_idx - 1])
        {
            char ANS = 0;
            attempt = attempt + 1;

            // Open image if needed (OS-dependent)
            if (doesRequireImages(quest_idx))
            {
                openImage(quest_idx);
            }


            // GUI
            std::cout << "--- " << attempt << " / " << max_attempt << " ---" << std::endl;

            getline(quest_file, curr_str);
            std::cout << curr_str << std::endl
                      << std::endl;

            getline(quest_file, curr_str);
            std::cout << "(a) " << curr_str << std::endl;
            getline(quest_file, curr_str);
            std::cout << "(b) " << curr_str << std::endl;
            getline(quest_file, curr_str);
            std::cout << "(c) " << curr_str << std::endl;
            getline(quest_file, curr_str);
            std::cout << "(d) " << curr_str << std::endl;

            std::cout << std::endl
                      << "Choose: ";
            std::cin >> ANS;
            std::cout << std::endl;


            printRESULT(quest_idx, ANS);

            reader = reader + 4;
            quest_idx = quest_idx + 1;
            continue;
        }

        getline(quest_file, curr_str);
        getline(quest_file, curr_str);
        getline(quest_file, curr_str);
        getline(quest_file, curr_str);
        getline(quest_file, curr_str);
        reader = reader + 4;
        quest_idx = quest_idx + 1;
    }

    
    return 0;
}