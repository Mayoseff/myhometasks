#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

bool is_isogram(std::string str) 
{
  std::transform(str.begin(), str.end(), str.begin(), tolower);
  
  std::string cc;
  
  for(int i = 0; i < str.length(); ++i)
  {
    if (cc.find(str[i]) == -1)
      cc+=str[i];
    else return false;
  } 
  return true;
}
