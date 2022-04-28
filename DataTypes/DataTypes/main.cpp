//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define INTEGRAL_TYPES
//#define FLOATING_TYPES
//#define DECLARATION_OF_VARIABLES
//#define CONSTANTS

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;
	//cout << false << endl;

#ifdef INTEGRAL_TYPES
	cout << sizeof(int) << endl;
	INT_MIN;	//минимальное значение для int
	INT_MAX;	//максимальное значение для int
	UINT_MAX;	//максмальное значение для unsigned int
	cout << "unsigned int: " << 0 << " ... " << UINT_MAX << endl;
	cout << "  signed int: " << INT_MIN << " ... " << INT_MAX << endl;
#endif // INTEGRAL_TYPES

#ifdef FLOATING_TYPES
	//cout << sizeof(float) << endl;
//cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif // FLOATING_TYPES


#ifdef DECLARATION_OF_VARIABLES
	//идентификатор - это имя.
//identifier - это имя.
//cout << var << endl;

//Проинициализировать
//Инициализация - это присвоение начального значения.

//double Price;	//Просто объявление переменной
//double Price = 0;	//Инициализация при объявлении переменной
//cout << Price << endl;
//int Count;	//Просто объявление переменной
//Count = 0;	//Инициализация после объявления
//cout << Count << endl;

	double price_of_coffe;
	int number_of_cups;
	cout << "Введите стоимость чашки кофе: "; cin >> price_of_coffe;//Инициализация вводом с клавиатуры
	cout << "Введите количество чашек: "; cin >> number_of_cups;


	//				type name;
	int t;
	double price;
	char sign;
#endif // DECLARATION_OF_VARIABLES

	int price_of_coffe;//snake_case_style
	int CammelCaseStyle;//Большой верблюд
	int cammelCaseStyle;//Маленький верблюд
	//Верблюдов еще называют PascalCaseStyle

#ifdef CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;
	speed = 50;
	//max_speed = 280;

	1024;	//Числовая константа типа int
	1024.;	//Числовая константа типа double
	.1024;	//Числовая константа типа double
	.1024f;	//Числовая константа типа float
	cout << sizeof(1024) << endl;
	cout << typeid(1024U).name() << endl;

	cout << typeid('@').name() << endl;
	'@';//Символьная константа, или константа типа char.
	cout << sizeof('@') << endl;
	cout << sizeof("@") << endl;
	cout << sizeof("Hello") << endl;
	//'Hello';  
#endif // CONSTANTS

	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	/*int c = a;
	a = b;
	b = c;*/
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << "\t" << b << endl;
}

/*
---------------------------
1. ABC...Zabc...z0123...9_;
2. 
3. 
4. 
---------------------------
*/