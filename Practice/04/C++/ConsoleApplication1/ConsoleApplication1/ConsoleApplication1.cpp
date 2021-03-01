#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, g, b, c;
	int y;
	cout << "Решить с дополнительной переменной-1, без-2\n";
	cin >> y;
	switch (y)
	{
	case 1:
	{
		cout << "Введите первое число ";
		cin >> a;
		cout << "Введите второе число ";
		cin >> b;
		c = a;
		a = b;
		b = c;
		cout << "\n Первое число " << a;
		cout << "\n Второе число " << b;
		break;
	}
	case 2:
	{
		cout << "Введите первое число ";
		cin >> a;
		cout << "Введите второе число ";
		cin >> b;
		a = b - a;
		b = b - a;
		a = b + a;
		cout << "\n Первое число " << a;
		cout << "\n Второе число " << b;
		break;
	}
	default:
	{
		cout << "Ошибка ввода";
	}
	}
}
