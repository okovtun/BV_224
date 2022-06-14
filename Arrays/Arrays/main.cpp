//Array
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};
	//arr[2] = 123;	//Во второй элемент массива записываем значение 123

	//Ввод массива с клавиатуры:
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	//Обращаемся к элементу массива на запись
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;	//Обращаемся к элементу массива на чтение
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке 
	//(от последнего элемента до нулевого):
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / n << endl;

	//Поиск минимального и максимального значения в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}