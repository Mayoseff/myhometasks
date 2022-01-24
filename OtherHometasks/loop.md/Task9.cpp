/*
Задача 9.
Перевести заданное пользователем число (целое, положительнео) в 2-ю систему счисления и вывести на экран.
*/

#include<cmath>
#include <iostream>

int main()
{
    int n;
    std::cout << "Number = "; std::cin >> n;

    if (n == 0) { std::cout << 0; return 0; }

    for (int i = int(log2(n)); i >= 0; --i)
    {
        if ((n >> i) % 2 == 0)
            std::cout << 0;

        else std::cout << 1;
    }
    return 0;
}
