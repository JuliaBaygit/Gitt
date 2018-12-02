#include "std.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Сумма " << endl;
	cout << a + b << endl;
	_getch();
	return 0;
}
