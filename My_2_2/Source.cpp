#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0, b = 10;
	cout << "������� �������� ��������� ��������� �����(����� ������): ";
	cin >> a >> b;

	int number = a + rand() % (b - a);
	cout << "���� ��������� �����: " << number;


	return 0;
}