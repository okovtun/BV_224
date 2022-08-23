#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
void Fibonacci(int n, int a = 0, int b = 1);

//#define ELEVATOR
//#define POWER
#define FIBONACCI

void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	//cout << "Hello World";
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;
	cout << "Введите предельное число: "; cin >> n;
	Fibonacci(n);
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

int factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * factorial(n - 1);*/
	return n == 0 ? 1 : n * factorial(n - 1);
}

double power(double a, int n)
{
	/*if (n == 0)return 1;
	else if (n > 0)return a * power(a, n - 1);
	else return 1 / a * power(a, n + 1);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
}

void Fibonacci(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	Fibonacci(n, b, a + b);
}