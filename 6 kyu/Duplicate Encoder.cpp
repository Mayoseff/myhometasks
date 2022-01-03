#include <string>
std::string duplicate_encoder(const std::string word) {
    std::string res;
    std::string copy = word;
    char symb;

    for (int i = 0; i < copy.size(); ++i) {
        copy[i] = std::tolower(copy[i]);
    }

    for (int i = 0; i < word.size(); ++i) {
        symb = copy[i];
        copy[i] = '\0';
        if (copy.find(symb) != -1)
            res += ")";
        else res += "(";
        copy[i] = symb;
    }
    return res;
}
