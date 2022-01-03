int last_digit(std::string str1, std::string str2)
{
    if (str2[0] == '0')
        return 1;

    if (str2.size() == 1 && str2[0] == '1')
        return str1[str1.size() - 1] - 48;


    if (str1[str1.size() - 1] == '2')
    {
        if (str2[str2.size() - 1] == '1' || str2[str2.size() - 1] == '5' || str2[str2.size() - 1] == '9')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 2;
            }
            else return 8;
        }
        if (str2[str2.size() - 1] == '2' || str2[str2.size() - 1] == '6')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 4;
            }
            else return 6;
        }
        if (str2[str2.size() - 1] == '3' || str2[str2.size() - 1] == '7')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 8;
            }
            else return 2;
        }
        if (str2[str2.size() - 1] == '4' || str2[str2.size() - 1] == '8' || str2[str2.size() - 1] == '0')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 6;
            }
            else return 4;
        }
    }

    if (str1[str1.size() - 1] == '6')
        return 6;

    if (str1[str1.size() - 1] == '1')
        return 1;

    if (str1[str1.size() - 1] == '3')
    {
        if (str2[str2.size() - 1] == '1' || str2[str2.size() - 1] == '5' || str2[str2.size() - 1] == '9')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 3;
            }
            else return 7;
        }
        if (str2[str2.size() - 1] == '2' || str2[str2.size() - 1] == '6')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 9;
            }
            else return 1;
        }
        if (str2[str2.size() - 1] == '3' || str2[str2.size() - 1] == '7')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 7;
            }
            else return 3;
        }
        if (str2[str2.size() - 1] == '4' || str2[str2.size() - 1] == '8' || str2[str2.size() - 1] == '0')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 1;
            }
            else return 9;
        }
    }

    if (str1[str1.size() - 1] == '4')
    {
        if (int(str2[str2.size() - 1]) % 2 == 0)
            return 6;
        else return 4;
    }

    if (str1[str1.size() - 1] == '5')
        return 5;

    if (str1[str1.size() - 1] == '7')
    {
        if (str2[str2.size() - 1] == '1' || str2[str2.size() - 1] == '5' || str2[str2.size() - 1] == '9')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 7;
            }
            else return 3;
        }
        if (str2[str2.size() - 1] == '2' || str2[str2.size() - 1] == '6')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 9;
            }
            else return 1;
        }
        if (str2[str2.size() - 1] == '3' || str2[str2.size() - 1] == '7')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 3;
            }
            else return 7;
        }
        if (str2[str2.size() - 1] == '4' || str2[str2.size() - 1] == '8' || str2[str2.size() - 1] == '0')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 1;
            }
            else return 9;
        }
    }
    if (str1[str1.size() - 1] == '8')
    {
        if (str2[str2.size() - 1] == '1' || str2[str2.size() - 1] == '5' || str2[str2.size() - 1] == '9')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 8;
            }
            else return 2;
        }
        if (str2[str2.size() - 1] == '2' || str2[str2.size() - 1] == '6')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 4;
            }
            else return 6;
        }
        if (str2[str2.size() - 1] == '3' || str2[str2.size() - 1] == '7')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 2;
            }
            else return 8;
        }
        if (str2[str2.size() - 1] == '4' || str2[str2.size() - 1] == '8' || str2[str2.size() - 1] == '0')
        {
            if (int(str2[str2.size() - 2]) % 2 == 0)
            {
                return 6;
            }
            else return 4;
        }
    }
    if (str1[str1.size() - 1] == '9')
    {
        if (int(str2[str2.size() - 1]) % 2 == 0)
            return 1;
        else return 9;
    }

    if (str1[str1.size() - 1] == '0')
        return 0;
    

}
