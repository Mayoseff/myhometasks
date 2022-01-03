#include<cmath>

bool is_square(int n)
{
  int square = sqrt(n);
  if (square*square == n)
    return true;
  return false;
}
