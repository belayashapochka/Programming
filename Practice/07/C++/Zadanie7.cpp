#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int f;
    double a, b, c, x1, x2, x3, y1, y2, y3,p,S;
    
    cout << "Введите 1 если у вас есть информация про длину сторон, иначе 2 для метода координат: ";
    cin >> f;
   
    switch (f)
    {
    case 1:
    {
        cout << "Введите значение a: ";
        cin >> a;
        cout << "Введите значение b: ";
        cin >> b;
        cout << "Введите значение c: ";
        cin >> c; 
        if ((a < b + c) && (b < a + c) && (c < a + b))
            {
            p = (a + b + c) / 2;
            S = sqrt(p * (p - a) * (p - b) * (p - c));
            cout << "S = " << S;
            }
        else
            {
            cout << "Такой треугольник не может существовать!";
            }
    }
        break;
    case 2:
    {
        cout << "Введите координаты точки A " << endl;
        cin >> x1 >> y1;
        cout << "Введите координаты точки B " << endl;
        cin >> x2 >> y2;
        cout << "Введите координаты точки C " << endl;
        cin >> x3 >> y3;
        a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        b = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
        c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
        if ((a < b + c) && (b < a + c) && (c < a + b))
        {
            p = (a + b + c) / 2;
            S = sqrt(p * (p - a) * (p - b) * (p - c));
            cout << "S = " << S;
        }
        else
        {
            cout << "Такой треугольник не может существовать!";
        }
    }
        break;
    default:
        cout << ("Ошибочный ввод)");
    }
}
