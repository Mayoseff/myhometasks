#include <iostream>
#include <string>
std::string reverse_words(std::string str)
{
   std::string newRstr;
  std::string res;
  for (int i = 0; i < str.length(); ++i){
    if (str[i] == ' '){
      res += newRstr;
      res += ' ';
      newRstr = "";
    }
    else {
      newRstr = str[i] + newRstr;
    }
  }
  res += newRstr;
  return res;
}
