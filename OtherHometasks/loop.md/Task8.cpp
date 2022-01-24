/*
Задача 8.
Вычислить сумму и произведение цифр целого числа, введенного пользователем.
*/

#include <iostream>

int main()
{
    int S = 0;
    int pr = 1;
    int n;

    std::cout << "n= ";
    std::cin >> n;

    int x = n;
    while (x > 0)
    {
        S += x % 10;
        pr *= x % 10;
        x /= 10;
    }
    std::cout << "S = " << S << std::endl << "pr = " << pr << std::endl;
  return 0;
}
