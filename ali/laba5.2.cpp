#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

double calc(double a, double b, int n)
{
	if (n == 1)
		return a - b;
	else if (n == 2)
		return a * b;
	else if (n == 3)
		return a / b;
	else
		return a + b;
}

int main() {
	setlocale(0, "rus");
	double a, b;
	int n1, n2, n3;
	cout << "Введите число a: ";
	cin >> a;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Неправильный ввод! Введите значение a еще раз: ";
		cin >> a;
	}
	cout << "Введите число b: ";
	cin >> b;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Неправильный ввод! Введите значение a еще раз: ";
		cin >> b;
	}
	cout << "Введите номер операции: 1 - вычитание, 2 - умножение, 3 - деление ";
	cin >> n1;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Неправильный ввод! Введите значение a еще раз: ";
		cin >> n1;
	}
	cout << "Результат для данной операции - " << calc(a, b, n1) << endl;
	cout << "Введите номер операции: 1 - вычитание, 2 - умножение, 3 - деление ";
	cin >> n2;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Неправильный ввод! Введите значение a еще раз: ";
		cin >> n2;
	}
	cout << "Результат для данной операции - " << calc(a, b, n2) << endl;
	cout << "Введите номер операции: 1 - вычитание, 2 - умножение, 3 - деление ";
	cin >> n3;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Неправильный ввод! Введите значение a еще раз: ";
		cin >> n3;
	}
	cout << "Результат для данной операции - " << calc(a, b, n3) << endl;
}	