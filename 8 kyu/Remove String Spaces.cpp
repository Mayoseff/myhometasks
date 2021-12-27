#include <iostream>
#include <string>
using namespace std;

std::string no_space(std::string x)
{
    string y;

    for (int i = 0; i < x.length(); ++i)
    {
        if (x[i] != ' ')
            y += x[i];
    }
    return y;
}
