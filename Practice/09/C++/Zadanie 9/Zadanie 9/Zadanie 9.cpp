#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int d,c,f,g,a,b ;
    cout << "Введите время прихода 1 человека через пробел!\n";
    cin >> a >> b;
    cout << "Введите время прихода 2 человека через пробел!\n";
    cin >> c >> d;
    if ((a <= 23) && (a >= 0) && (b <= 59) && (b > 0) && (c <= 23) && (c >= 0) && (d <= 59) && (d > 0))
    {
        f = abs(a - c);
        g = abs(b - d);
        if (((f == 0) && (g <= 15)) || ((f == 1) && (g >= 45)) || ((f == 23) && (g >= 45)))
        {
            cout << "Встреча состоиться";
        }
        else 
        { 
            cout << "Встреча не состоиться";
        }
    }
    else
    { 
        cout << "Ошибка ввода";
    }
        return 0;
}