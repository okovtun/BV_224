#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже\n";
}

/*
	1. Итерционный - при помощи циклов
	2. Рекурсивный - при помощи рекурсии

	Stack - это модель памяти, из которой последний записанный элемент считывается первым.
	LIFO - Last-In First-Out (Последний зашел - первый вышел).
	Stack - Стопка.
	Вершина стека - последний записанный элемент, который считается первым.
	Дно стека - первый записанный элемент, который считается последним.

	Stack overflow exception
*/