#include <cmath>

bool narcissistic(int val) 
{
    int sum = 0;
    int len = 0;
    int x = val;
    while (x > 0)
    {
        len += 1;
        x /= 10;
    }
    x = val;
    while (x > 0)
    {
        sum += pow(x % 10, len);
        x /= 10;
    }
    return sum == val;
}
