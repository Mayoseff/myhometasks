/*Задача 2. Посчитать вещественные корни квадратного уравнения ax^2+bx+c=0. 
На вход подаются коэффициенты a, b, c. 
Постараться учесть все возможные варианты значений коэффициентов.*/

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "");

    double a, b, c;
    std::cin >> a >> b >> c;
    double D = b * b - 4 * a * c;

    if (D < 0)
        std::cout << "Это уравнение не имеет вещесвтенных корней (D<0)";

    else if (a + c == b)
        std::cout << "x1 = " << -1 << std::endl << "x2 = " << -c / a;

    else if (a + b + c == 0)
        std::cout << "x1 = " << 1 << std::endl << "x2 = " << c / a;

    else if (D > 0)     //D>0
        std::cout << "x1 = " << (sqrt(D) + b) / (2 * a) << std::endl << "x2 = " << (sqrt(D) - b) / (2 * a);

    else if (D == 0)    //D=0
        std::cout << -b / 2 * a;
        
    return 0;
}
