#include <string>

std::string createPhoneNumber(const int arr[10]) {
    int i;
    std::string pn = "(";
    for (i = 0; i < 3; ++i)
        pn += std::to_string(arr[i]);
    pn += ") ";
    for (i = 3; i < 6; ++i)
        pn += std::to_string(arr[i]);
    pn += "-";
    for (i = 6; i < 10; ++i)
        pn += std::to_string(arr[i]);
    return pn;
}
