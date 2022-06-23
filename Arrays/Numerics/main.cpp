#include<iostream>
using namespace std;

#define DEC_2_BIN

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	/*for (;;)
{
	cout << "Hello Numerics";
}*/
	int decimal;	//десятичное число введенное пользоваьелем
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_SIZE = 32;	//int - 4 Bytes = 32bit
	bool bin[MAX_SIZE] = {};	//Этот массив будет хранить разряды двоичного числа

	int i = 0;	//Счетчик разрядов
	/*while (decimal)
	{
		bin[i] = decimal % 2;	//получаем младший разряд двоичного числа
		decimal /= 2;	//убираем полученный разряд двоичного числа
		i++;
	}*/
	//for (; decimal; bin[i] = decimal % 2, decimal /= 2, i++);
	/*{
		;	//получаем младший разряд двоичного числа
		;	//убираем полученный разряд двоичного числа
		;
	}*/

	for (; decimal; i++, decimal /= 2)bin[i] = decimal % 2;
	//Comma operator
	//	expression1, expression2, expression3

	//i--;
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // DEC_2_BIN

}