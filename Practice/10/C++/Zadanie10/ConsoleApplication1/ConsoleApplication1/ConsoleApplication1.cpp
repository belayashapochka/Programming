﻿#include<locale>
#include<iostream>
#include<cmath>

int main() 
{
    setlocale(LC_ALL, "ru");
    std::cout << "Введите число и диапазоны через пробел!\n: ";
    int s, l1, r1, l2, r2, x1 , x2, z;
    z = 0;
    x1 = 0;
    x2 = 0;
    std::cin >> s >> l1 >> r1 >> l2 >> r2;
    if ((s > (r1 + r2)) || (s < (l1 + l2)))
    {
        std::cout << -1;
    }
    else
    {
        if ((s - l1) >= l2) 
        {
            if (s <= (l1 + r2))
            {
                std::cout << l1 << " " << s - l1;
            }
            else
            {
                z = abs(s - (l1 + r2));
                if ((l1 + z) < r1 && (r2 - z) > l2) 
                {
                    std::cout << l1 + z << " " << s - (l1 + z);
                }
                else
                {
                    std::cout << -1;
                }
            }
        }
        else
        {
            std::cout << -1;
        }
    }
}