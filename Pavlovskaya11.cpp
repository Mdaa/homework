// Pavlovskaya11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

float deyF(float a1, float b1, float c1, float Xnach1, float Xkon1, float dX1)
{
	float F;
	for (float x = Xnach1; x < Xkon1; x += dX1)
	{
		if ((c1 < 0) && (x != 0))
			F = ((-a1)*x) - c1;
		else
			if ((c1 > 0) && (x == 0))
				F = (x - a1) / (-c1);
			else
				F = (b1 * x) / (c1 - a1);

		cout << "При х = " << x << " F  = " << F << endl;
	}
	return 0;
}

int celF(int a2, int b2, int c2, int Xnach2, int Xkon2, int dX2)
{
	int F;
	for (int x = Xnach2; x < Xkon2; x += dX2)
	{
		if ((c2 < 0) && (x != 0))
			F = ((-a2)*x) - c2;
		else
			if ((c2 > 0) && (x == 0))
				F = (x - a2) / (-c2);
			else
				F = (b2 * x) / (c2 - a2);

		cout << "При х = " << x << " F  = " << F << endl;
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, c, Xnach, Xkon, dX;

	cout << "Введите число а: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;
	cout << "Введите Хнач: ";
	cin >> Xnach;
	cout << "Введите Хкон: ";
	cin >> Xkon;
	cout << "Введите шаг dX: ";
	cin >> dX;

	int ac = int(a);
	int bc = int(b);
	int cc = int(c);
	int Xnachc = int(Xnach);
	int Xkonc = int(Xkon);
	int dXc = int(dX);


	if ((ac || bc || cc) != 0)
	{
		deyF(a, b, c, Xnach, Xkon, dX);
	}

	if ((ac || bc || cc) == 0)
	{
		celF(ac, bc, cc, Xnachc, Xkonc, dXc);
	}

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
