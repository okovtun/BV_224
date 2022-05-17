#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TASK_1
#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef TASK_1
	int t;
	cout << "Введите температуру воздуха: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else if (t < 0)
	{
		cout << "На улице холодно" << endl;
	}
	else
	{
		cout << "На улице 0" << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	double a, b;	//Числа, вводимые с клавиатуры
	char s;	//Sign - знак операции
	cout << "Введите арифметическое выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: no operation" << endl;
	}
#endif // TASK_2


	//switch
#define CONST_1 1
#define CONST_2 2
#define CONST_N 'N'
	int var = 0;
	int code1 = 0;
	int code2 = 0;
	int codeN = 0;
	int default_code = 0;


	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//...........
		//...........
	case CONST_N: codeN; break;
	default: default_code;
	}






}