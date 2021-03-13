#include <iostream>

struct Date
{
	int year;
};

struct Auto
{
	int wheels;
	float speed;
	char color;
	Date sozdanie;
};

struct IntArray {
	int* data;
	int size;
};

int main(int argc, char** argv)
{
	Auto shkoda;
	shkoda.color = 'r';
	shkoda.speed = 228.23;
	shkoda.wheels = 4;
	shkoda.sozdanie.year = 1999;

	Auto audi = { 4,123.23,'b' };

	std::cout << audi.color << std::endl << shkoda.speed;
	

    std::cin.get();
    return 0;
}
