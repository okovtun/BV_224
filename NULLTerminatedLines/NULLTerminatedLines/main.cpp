//NULLTerminatedLines
#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int StringLength(const char str[]);
void upper_case(char str[]);

//#define EXAMPLE_1
#define EXAMPLE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef EXAMPLE_1
	//ASCII-символ с кодом 0 - '\0'
//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	char str[] = "Hello";
	//str[]   - строковая переменная
	//"Hello" - строковая константа
	cout << str << endl;
	cout << typeid(str).name() << endl;
	cout << typeid("Hello").name() << endl;
#endif // EXAMPLE_1

	const int SIZE = 20;
	char str[SIZE] = {};
	cout << (int)'\0' << endl;
	cout << (int)'0' << endl;
	cout << "Введите строку: ";
	//cin >> str;
	SetConsoleCP(1251);
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Длина строки: " << StringLength(str) << endl;
	cout << "Длина строки: " << strlen(str) << endl;
	cout << "Длина строки в Байтах: " << sizeof(str) << endl;
}

int StringLength(const char str[])
{
	//Принимает строку, и возвращает размер строки в символах
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void upper_case(char str[])
{
	
}