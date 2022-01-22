#include <iostream>
int main()
{
    int h;
    do {
        std::cout << "Enter the heigh of triangle: ";
        std::cin >> h;
    } while (h < 2 || h > 25);

    for (int i = 0; i <= h; ++i) {
        int k = i;
        while (k > 0) {
            std::cout << "*";
            --k;
        }
        std::cout << std::endl;
    }
}
