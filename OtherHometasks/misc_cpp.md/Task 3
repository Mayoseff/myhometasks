/*
Задача 3.
На вход подаются координаты точки на плоскости.
Проверить, попадает ли она в кольцо, образованное
пространством между границей внешней окружности радиуса
R и внутренней окружности радиуса r.
*/

#include <iostream>
#include<cmath>

int main()
{
    double r, R;
    do {
        std::cout << "r = ";
        std::cin >> r;
        std::cout << "R = ";
        std::cin >> R;
    } while (r == R || r <= 0 || R <= 0 || r > R);

    double x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << std::endl;

    //Если я правильно понял условие, то точки на границах самих окружностей не в счёт
    if (abs(x) >= R || abs(y) >= R)
        std::cout << "No";

    else if (x * x + y * y < R * R && x * x + y * y > r * r)
        std::cout << "Yes!" << std::endl << "x = " << x << " and y = " << y << " are between the circles with r = " << r << " and R = " << R << std::endl;

    else std::cout << "No!" << std::endl << "x = " << x << " and y = " << y << " are not between the circles with r = " << r << " and R = " << R << std::endl;

    return 0;
}
