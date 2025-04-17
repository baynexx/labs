#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void power_a(double a, double &b)
{
	b = pow(a, b);
}

int main()
{
	setlocale(0, "rus");
	double a, b;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите вещественное число а: ";
		while (!(cin >> a))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Число введено неверно! Повторите ввод: ";
			cin >> a;
		}
		cout << "Введите вещественное число b: ";
		while (!(cin >> b))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Число введено неверно! Повторите ввод: ";
			cin >> b;
		}
		power_a(a, b);
		cout << "а в степени b = " << b << endl;
	}
}	

