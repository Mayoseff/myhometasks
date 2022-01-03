#include <string>
#include <sstream>


std::string number_to_string(int num) 
{
    std::string str;
    std::stringstream ss;
    ss << num;
    ss >> str;
    return str;
}
