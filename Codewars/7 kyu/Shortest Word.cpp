#include <string>
int find_short(std::string str)
{
  int min=str.size();
  int q=0;
  for(int i = 0; i < str.size(); ++i)
    if(str[i] == ' ')
      {
      min > q ?  min = q : q =0;
      }
    else q++;
  return min > q ? q : min;

}
