#include <locale>
#include <iostream>

int func(int x)
{
    if (x == 1) { return x; }
    x = x * func(x - 1);
    
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    std::cout << "Введите число\n";
    std::cin >> a;
    if (a > 16)
    {
        std::cout << "Слишко большое число!";
    }
    else if (a == 0)
    {
        std::cout << "1";
    }
    else
    {
        std::cout << func(a);
    }
    

}
