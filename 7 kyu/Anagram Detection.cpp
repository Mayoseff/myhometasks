#include <algorithm>
#include <cctype>


bool isAnagram(std::string test, std::string original)
{
    std::string s1 = test;
    std::string s2 = original;

    std::transform(s1.begin(), s1.end(), s1.begin(), tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), tolower);

    if (s1.size() != s2.size())
        return false;

    if (s1.size() == s2.size() == 0)
        return true;

    for (int i = 0; i < s1.size(); ++i)
    {
        for (int j = 0; j < s2.size(); ++j)
        {
            if (s1.find(s2[j]) != -1)
            {
                s1[s1.find(s2[j])] = '\0';
                s2[j] = '\0';
            }
            else return false;
        }
    }
    return true;
}
