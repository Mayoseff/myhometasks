/*
Задача 12.
Перевести заданное пользователем число (целое, положительнео) 
в заданную пользователем систему счисления (от 2 до 16). 
Для систем счисления более 10 использовать буквы английского алфавита ABCDEF
*/

#include <iostream>

int main()
{
	int n;
	int s;

	do {
		std::cout << "Number (possitive) = "; std::cin >> n;
	} while (n < 0);
	do {
		std::cout << "System (2-16) = "; std::cin >> s;
	} while (s < 2 || s>16);

	if (n == 0)
	{
		std::cout << 0 << "_10 = " << "0_" << s;
		return 0;
	}

	int x = n;
	int k = 0;
	while (x > 0)	//Счёт длины числа
	{
		x /= s;
		++k;
	}

	int y = k;
	int q = 1;

	std::cout << n << " = ";

	for (int i = k; i > 0; --i)
	{
		x = n;
		while (y > q)	//Для записи остатков cнизу вверх
		{
			x /= s;
			--y;
		}

		if (s >= 10)
		{
			switch (x % s)
			{
			case 10: std::cout << "A"; break;
			case 11: std::cout << "B"; break;
			case 12: std::cout << "C"; break;
			case 13: std::cout << "D"; break;
			case 14: std::cout << "E"; break;
			case 15: std::cout << "F"; break;
			default: std::cout << x % s;
			}
		}

		if (s < 10)
			std::cout << x % s;

		++q;
		y = k;
	}
	std::cout << "_" << s;
	std::cout << std::endl;
}
