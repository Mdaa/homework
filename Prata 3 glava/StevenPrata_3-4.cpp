// StevenPrata_3-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const int kmin = 60;
	const int kdays = 24;
	long long seconds;
	int minutes;
	int hours;
	int days;
	int days1;
	int seconds1;
	int hours1;
	int minutes1;

	cout << "Enter the number of seconds ";
	cin >> seconds;

	days = ((seconds / kmin) / kmin) / kdays;

	days1 = ((days * kdays) * kmin) * kmin;
	seconds1 = seconds - days1;

	hours = (seconds1 / kmin) / kmin;
	hours1 = (hours * kmin) * kmin;
	seconds1 = seconds1 - hours1;

	minutes = seconds1 / kmin;
	minutes1 = minutes * kmin;
	seconds1 = seconds1 - minutes1;

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds1 << " seconds\n";

	system("pause");
	return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
