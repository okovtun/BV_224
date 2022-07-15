﻿//Functions
#pragma warning (disable:4326)
#include<iostream>
using namespace std;

int Add(int a, int b = 0, int c = 0);	//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Factorial(int n);
double Power(double a, int n);

//Too few arguments in function call  - если передать в функцию меньше параметров, чем она принимает
//Too many arguments in function call - если передать в функцию больше параметров, чем она принимает
//Function doesn't take N arguments
//default value

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);//Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b, int c)//Реализация функции (Определение функции - Function definition)
{
	//Addition - Сложение
	int sum = a + b + c;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - Вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - Умножение
	return a * b;
}
double Div(int a, int b)
{
	//Division - Деление
	return (double)a / b;
}
int Factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, int n)
{
	//TODO:
	return 0;
}