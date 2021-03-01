#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int money, n, k, b = 0;

	cin >> money >> n;

	vector<string> name(n);
	vector<int> price(n);
	vector<int> v(n);
	vector<int> otnosh(n);
	vector<int> Otletaem(n);
	for (int i = 0; i < n; i++)
	{
		cin >> name[i] >> price[i] >> v[i];
		otnosh[i] = money / price[i];
		Otletaem[i] = otnosh[i] * v[i];
		if (Otletaem[i] == 0)
		{
			b++;
		}
	}
	if (b == n) {
		cout << -1 << endl;
		return(0);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Otletaem[i] > Otletaem[j])
			k = i;
		}
	}
	cout << name[k] << " " << otnosh[k] << " " << endl << Otletaem[k] << endl << money - (price[k] * otnosh[k]) << endl;
	system("pause");
	return(0);
}