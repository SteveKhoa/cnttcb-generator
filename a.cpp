#include <cstdlib>
#include <iostream>

unsigned int needImages[] = {71,72,73,92,193,194,195,211,217,228,246,272};
unsigned int needImages_size = sizeof(needImages)/sizeof(unsigned int);

bool doesRequireImages(unsigned int quest_num)
{
    int l = 0, r = needImages_size;
    std::cout << needImages_size << " | ";

    int mid = (r + l)/2;

    while (r - l > 0 && quest_num != needImages[mid])
    {
        if (quest_num < needImages[mid])
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
        
        mid = (r+l)/2;
    }

    if (quest_num == needImages[mid])
        return true;
    return false;
}

int main()
{
    std::cout << doesRequireImages(215);
    return 0;
}