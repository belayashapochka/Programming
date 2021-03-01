#include <iostream> 
#include <vector> 
#include <cmath> 
#include <string> 
#include <map> 
#include <ctime> 
#include <iomanip> 

struct Student
{
	std::string name;
	int group;
	std::map<int, int> exam;
};
void vuvod(Student a)
{
	std::cout << "| " << a.name << "  \t|" << std::setw(5);
	std::cout << a.group << "  |   ";
	std::cout << a.exam[0] << "  |   ";
	std::cout << a.exam[1] << "  |   ";
	std::cout << a.exam[2] << "  |   ";
	std::cout << a.exam[3] << "  |\n";
}

Student vvod(Student a, std::string name, int group, int math, int his, int ph, int prog)
{
	std::map<int, int> m = { {0, math}, {1, his}, {2, ph}, {3, prog} };
	a.name = name;
	a.group = group;
	a.exam = m;
	return a;
}
Student* BozoSort(Student a[UCHAR_MAX]) 
{
	int r1, r2, k = 0, ind = 0, check = 0, prov = 0, n = 0;
	for (int i = 0; i < UCHAR_MAX; i++)
	{
		if (a[i].exam[0] == 0) {
			break;
		}
		n++;
	}
	while (1) {
		r1 = rand() % n;
		r2 = rand() % n;
		if (r1 != r2) 
		{
			std::swap(a[r1], a[r2]);
			for (int i = 0; i < n - 1; i++) 
			{
				while (1) {
					if (a[i].name[k] < a[i + 1].name[k]) {
						k = 0;
						ind++;
						break;
					}
					else if (a[i].name[k] == a[i + 1].name[k])
					{
						k++;
					}
					else {
						ind = 0;
						k = 0;
						break;
					}
				}
			}
		}
		if (ind == n - 1) {
			std::vector<int>Expulsion(n);
			int k = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (a[i].exam[j] == 2)
					{
						Expulsion[k] = i;
						k++;
						if (prov == 0) {
							std::cout << "+---------------+-------+------+------+------+------+\n";
							std::cout << "|     Name\t" << "| Group " << "| Math " << "| Phys " << "| Hist " << "| Prog |\n";
						}
						std::cout << "+---------------+-------+------+------+------+------+\n";
						vuvod(a[i]);
						prov = 1;
						break;
					}
				}
			}
			if (prov == 0) {
				std::cout << "Not found\n";
				break;
			}
			if (prov == 1) {
				std::cout << "+---------------+-------+------+------+------+------+\n\n";
				std::cout << "Expulsion\n\n";
				int vsego = 0;
				for (int i = 0; i < k; i++) {
					vsego++;
				}
				r1 = rand() % vsego;
				std::cout << "+---------------+-------+------+------+------+------+\n";
				std::cout << "|     Name\t" << "| Group " << "| Math " << "| Phys " << "| Hist " << "| Prog |\n";
				std::cout << "+---------------+-------+------+------+------+------+\n";
				vuvod(a[Expulsion[r1]]);
				std::cout << "+---------------+-------+------+------+------+------+\n";
				break;
			}
		}
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Student a[UCHAR_MAX];
	a[0] = vvod(a[0], "BulBul K", 5, 3, 4, 5, 3);
	a[1] = vvod(a[1], "AlipBlap V", 3, 3, 3, 2, 3);
	a[2] = vvod(a[2], "MilkNulk M", 2, 4, 4, 4, 4);
	a[3] = vvod(a[3], "ButNar A", 1, 5, 5, 5, 5);
	a[4] = vvod(a[4], "LlkFll D", 8, 5, 2, 3, 3);
	a[5] = vvod(a[5], "Jgjbopp D", 4, 2, 5, 3, 3);
	a[6] = vvod(a[6], "Peredri N", 202, 6, 4, 2, 5);
	BozoSort(a);
	std::cout << "\n";
}