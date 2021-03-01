#include <locale>
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b,v;
    std::cout << "Введите число\n";
    std::cin >> a;
    b = 1;
    v = 1;
    for (int i = 2; i < a; i++)
    {      ++v;

        if ((a % v) == 0)
        {
            std::cout << "Составное число";
            b = v;
            a = v;
        }
    
        
        

    }

    if (b==1)
    {
        std::cout << "Простое число";
    }
}