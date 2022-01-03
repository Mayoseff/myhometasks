#include <iostream>

int main()
{
    int h;
    do {
        std::cout << "Enter he heigh of triangle: ";
        std::cin >> h;
    } while (h < 1);

    for (int i = 0; i < h; ++i){

        int sp = 0; // счётчик пробелов

        while (sp<=h-i){
            std::cout << " ";
            ++sp;
        }

        int k = 0; // счётчик *

        while (k<i*2+1){
            std::cout << "*";
            ++k;
        }
        std::cout << std::endl;
    }
}
