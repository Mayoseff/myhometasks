/*
Задача 3.
Для заданных значений n и x вычислить выражение:
S = sin(x) + sin(sin(x)) + ... + sin(sin( ... (sin (x)) ... ))
*/

#include <iostream>
#include <cmath>

int main()
{
	int n;
	double x;
	double S = 0;
  
	std::cout << "n = "; std::cin >> n;
	std::cout << "x = "; std::cin >> x;
  
	for (size_t i = 0; i < n; i++)
	{
		x = sin(x);
		S += x;
	}
	std::cout << S;
	return 0;
}
