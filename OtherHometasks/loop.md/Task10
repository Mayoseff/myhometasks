/*
Задача 10.
Перевести заданное пользователем число (целое, положительнео) в 16-ю систему счисления и вывести на экран.
*/

#include <iostream>

int main()
{
	int n;
	std::cout << "Number = "; std::cin >> n;
	int x = n;
	int k = 1;
	while (x > 16)
	{
		x /= 16;
		++k;
	}
	int y = k;
	int q = 1;
	for (int i = k; i > 0; --i)
	{
		x = n;
		while (y>q)
		{
			x/=16;
			--y;
		}
		switch (x % 16)
		{
		case 10: std::cout << "A"; break;
		case 11: std::cout << "B"; break;
		case 12: std::cout << "C"; break;
		case 13: std::cout << "D"; break;
		case 14: std::cout << "E"; break;
		case 15: std::cout << "F"; break;
		default: std::cout << x % 16;
		}
		++q;
		y = k;
	}
}
