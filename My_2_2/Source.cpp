#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0, b = 10;
	cout << "Задайте диапазон выпадений случайных чисел(через пробел): ";
	cin >> a >> b;

	int number = a + rand() % (b - a);
	cout << "Ваше случайное число: " << number;


	return 0;
}
