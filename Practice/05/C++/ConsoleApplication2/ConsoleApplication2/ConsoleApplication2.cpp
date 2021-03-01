#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, t, v, g, L;
	g = 9.8;
	cout << "Введите через пробел начальную координату,скорость,время : ";
	cin >> x >> v >> t;
	L = x + (v * t) - (g * t * t) / 2;
	L = abs(L - x);
	cout << "\n x(t) = " << L;

}