//FOR
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CLASS_WORK
//#define FACTORIAL
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "Rus");
	/*for (;;)
	{
		cout << "Hello ";;;;;;;;;;
	}*/

#ifdef CLASS_WORK
	int n;
	cout << "Введите количество итераций: ";
	cin >> n;
	//	for(counter; condition; expression)
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // CLASS_WORK

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	double factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		//cout << i << "! = ";
		factorial *= i;
		//cout << factorial << endl;
	}
	cout << n << "! = " << factorial << endl;
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//Основание степени
	int n;		//Показатель степени
	double N = 1;	//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;	//отправляем основание в знаменатель
		n = -n;		//меняем знак показателя на противоположный
	}
	for (int i = 0; i < n; i++)
	{
		N = N * a;//N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "Japanese");	//Возвращает кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Rus");
	cout << "Вот и сказочке конец!" << endl;
#endif // ASCII

	//i-й for
	//j-й for
}