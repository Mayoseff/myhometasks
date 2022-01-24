/*
Задача 2.
Для заданного значения n вычислить выражение: S = 1 + 1/2 + 1/4 + ... + 1/2^n
*/

#include <iostream>

int main()
{
	double S = 1;
	int k = 1;
	int n;

	std::cout << "n = ";
	std::cin >> n;

	while (k <= n)
	{
		int num = 1;
		for (int i = 0; i < k; ++i)
			num *= 2;
		++k;
		S += 1.0 / num;
	}
	std::cout << S;
	return 0;
}
