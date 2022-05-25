#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77
#define Enter		13
#define Escape		27

//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME
	int number;		//Число, введенное с клавиатуры
	int reverse = 0;//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//Создаем копию введеного числа, чтобы обеспечить неизменность введенного числа
	while (buffer)
	{
		reverse *= 10;	//Освобождаем младший разряд для сохранения следующей цифры
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число - Палиндром" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}
#endif // PALINDROME

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UP_ARROW)	cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)	cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)	cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)	cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter)cout << "Огонь" << endl;
		else if (key == Escape)cout << "Выход" << endl;
		else if (key != -32)cout << "Error: Нет такого действия, см. инструкцию)" << endl;
	} while (key != Escape);
}