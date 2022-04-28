#include<iostream>
using namespace std;

//#define OPERATORS_TYPES
//#define ARITHMETICAL_OPERATORS	//Арифметические операторы
//#define ASSIGNMENT_OPERATOR	//Оператор присваивания =
//#define INCREMENT_DECREMENT	//(++/--)
#define COMPOUND_ASSIGNMENTS	//Составные присваивания

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef OPERATORS_TYPES
	3;
	-3;		//unary minus
	8 - 3;	//binary minus
	8 * 3;
	//*3;	//have no sense  
#endif // OPERATORS_TYPES

#ifdef ARITHMETICAL_OPERATORS
/*
----------------------------------------
Unary:	+, -;
Binary:	+, -, *, /, % - остаток от деления
----------------------------------------
*/
	cout << 17 / 3 << endl;
	cout << 17. % 3 << endl;
	cout << 3 % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//		l-value = r-value;
	int a = 2;
	int b = a + 3 * 4 - 8 / 2;
	//a;//простейшее выражение, состоящее из одной переменной
	5;//простейшее выражение, состояшее из одной константы
	;//пустое выражение, оно не содержит ничего, даже ошибок
	//cout << a + b << endl;
	//a + b;

	//int a, b, c;
	//a = b = c = 0;  
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	int j = ++i;
	cout << i << endl;	//0
	cout << j << endl;	//1  
#endif // INCREMENT_DECREMENT

	int a = 2;
	int b = 3;
	//a = a + b;
	a += b;
	a -= b;
	a *= b;
	a /= b;
	a %= b;
	cout << a << endl;
}

//Expression - это синтаксическая конструкция, состоящая из операндов и операторов.
//Операнды - ...
//Операторы - это объекты, которые показывают....