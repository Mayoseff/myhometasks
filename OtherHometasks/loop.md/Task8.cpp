/*
Задача 8.
Вычислить сумму и произведение цифр целого числа, введенного пользователем.
*/

#include <iostream>

int main()
{
    long int S = 0;
    long int pr = 1;
    long int n;

    std::cout << "n= ";
    std::cin >> n;

    long int x = n;
    while (x > 0)
    {
        S += x % 10;
        pr *= x % 10;
        x /= 10;
    }
    std::cout << "S = " << S << std::endl << "pr = " << pr << std::endl;
  return 0;
}
