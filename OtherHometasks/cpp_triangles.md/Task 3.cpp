#include <iostream>
int main()
{
    int h;
    do {
        std::cout << "Enter the heigh of rhombus: ";
        std::cin >> h;
    } while (h < 1 || h % 2 == 0);

    for (int i = 0; i < h; ++i) {

        int sp = 0; //счётчик пробелов

        while (sp < h - i) {
            std::cout << " ";
            ++sp;
        }

        int k = 0; //счётчик *

        while (k < i * 2 + 1) {
            std::cout << "*";
            ++k;
        }
        std::cout << std::endl;
    }

    int k = 0;
    int sp = h;

    while (k < h * 2 + 1) {

        std::cout << "*";
        ++k;
    }
    std::cout << std::endl;

    sp = 0;
    for (int i = h; i >= 0; --i) {

        int q = 0;
        while (q <= sp) {
            std::cout << " ";
            ++q;
        }
        q = 0;
        ++sp;

        int k = 0;

        while (k < i * 2 - 1) {
            std::cout << "*";
            ++k;
        }
        std::cout << std::endl;
    }
}
