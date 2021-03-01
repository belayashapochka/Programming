#include <locale>
#include <iostream>
#include <cmath>

double BMI(double weight, double height)
{
    weight = weight / pow(height, 2);
    if (weight < 18.5)
    {
        std::cout << "Underweight";
    }
    else if ((18.5 <= weight) && (weight < 25))
    {
        std::cout << "Normal";
    }
    else if ((25 <= weight) && (weight < 30))
    {
        std::cout << "Overweight";
    }
    else
    {
        std::cout << "Obesity";
    }
    return 0;
}

void printBMI(double y) 
{
    if (y < 18.5)
    {
        std::cout << "Underweight";
    }
    else if ((18.5 <= y) && (y < 25))
    {
        std::cout << "Normal";
    }
    else if ((25 <= y) && (y < 30))
    {
        std::cout << "Overweight";
    }
    else
    {
        std::cout << "Obesity";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    double weight, height, y, Prompt;
    link:
    std::cout << "Введите 1, есои хотите ввести вес и высоту или 2, если хотите ввести индекс массы тела" << std::endl;
    std::cin >> Prompt;
    if (Prompt == 1)
    {
        std::cout << "Введите вес и высоты через пробел, в таком же порядке" << std::endl;
        std::cin >> weight >> height;
        height = height * 0.01;
        BMI(weight, height);
    }
    else if(Prompt == 2)
    {
        std::cout << "Введите индекс массы тела" << std::endl;
        std::cin >> y;
        printBMI(y);
    }
    else
    {
        std::cout << "А теперь без клоунады, или 1, или 2" << std::endl;
        goto link;
    }
    return 0;
}
