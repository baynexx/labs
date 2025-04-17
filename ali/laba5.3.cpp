#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void pow_2(unsigned n)
{
	if (n > 2)
		if (n % 2 == 1)
			cout << "NO";
		else
			pow_2(n / 2);
	else if (n == 1)
		cout << "NO";
	else 
		cout << "YES";
}

int main() {
	setlocale(0, "rus");
	unsigned n;
	while (!(cin >> n))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Неверный ввод! Введите натуральное число: ";
		cin >> n;
	}
	pow_2(n);
}	