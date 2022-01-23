/*
Задача 7. 
Дана окружность с целочисленным радиусом R<10^6. 
Посчитать число точек с целочисленными координатами, 
лежащих внутри окружности, в том числе и находящихся на границе окружности.
*/

#include <iostream>
#include <cmath>

int main()
{
    int r;
    do {
        std::cout << "r = ";
        std::cin >> r;
    } while (r < 1 || r >= pow(10, 6));

    int k = 0;

    for (int x = -r; x <= r; ++x)
    {
        for (int y = -r; y <= r; ++y)
        {
            if ((x * x + y * y) <= (r * r))
                ++k;
        }
    }
    std::cout << k;
    return 0;
}
