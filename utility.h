unsigned int getRandomNum()
{
    return rand() % max_constrain + 1;
}

bool validRandomNum(unsigned int num)
{
    if (checked[num - 1]) // Check if the value is hashed or not
        return false;
    return true;
}

unsigned int max_num(unsigned int i1, unsigned int i2)
{
    if (i1 > i2)
    {
        return i1;
    }

    return i2;
}

void printRESULT(unsigned int quest_num, char ans)
{
    if (ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
    {
        std::cout << "Dap an ban nhap khong phai a b c d!" << std::endl;
        return;
    }

    if (ans_array[quest_num - 1] == ans)
    {
        std::cout << "> Ban da tra loi DUNG!" << std::endl;
    }
    else
    {
        std::cout << "> SAI. Dap an dung la: " << ans_array[quest_num -1] << std::endl;
    }

    std::cout << std::endl << std::endl;
}

bool doesRequireImages(unsigned int quest_num)
{
    int l = 0, r = needImages_size;

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

void openImage(unsigned int quest_num)
{
    os_open.append(" img/");
    os_open.append(std::to_string(quest_num));
    os_open.append(".png");
    system(os_open.c_str());
}