/*
Задача 1.
Для заданного значения n вычислить выражение: S = 1 + 1/2 + 1/3 + ... + 1/n
*/

#include <iostream>

int main()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;

    double S = 0;

    int k = 1;
    while (k <= n)
    {
        S += 1.0 / double(k);
        ++k;
    }
    std::cout << S;
}
