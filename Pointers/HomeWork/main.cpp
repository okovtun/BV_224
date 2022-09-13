#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

void push_back(int** arr, int& n, int value);
int* pushFront(int* arr, int& n, int value);
int* insert(int* arr, int& n, int value, int indexValue);

int* PopBack(int* arr, int& n);
int* PopFront(int* arr, int& n);
int* Erase(int* arr, int& n, int indexErase);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	cout << "Исходный массив" << endl;
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;

	push_back(&arr, n, value);
	//int - int
	//int* - Указатель на int
	//int** - указатель на указатель на int
	cout << "Исходный массив с добавленым элементом в конце" << endl;
	Print(arr, n);
	/*arr = pushFront(arr, n, value);
	cout << "Исходный массив с добавленным элементом в конце и в начале" << endl;
	Print(arr, n);
	int indexValue;
	cout << "Введите индект добавляемого значения: "; cin >> indexValue;
	arr = insert(arr, n, value, indexValue);
	cout << "Исходный массив с добавленным элементом в конце, в начале и по индеку" << endl;
	Print(arr, n);*/

	/*arr = PopBack(arr, n);
	cout << "Исходный массив с удалением одного элемента с конца" << endl;
	Print(arr, n);*/

	/*arr = PopFront(arr, n);
	cout << "Исходный массив с удалением одного элемента сначала " << endl;
	Print(arr, n);*/

	int indexErase;
	cout << "Введите индекс элемента, который будет удален из массива: "; cin >> indexErase;
	arr = Erase(arr, n, indexErase);
	Print(arr, n);

	delete[] arr;//Memory leaks
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Через арифметику указателей и оператор разыменования
		*(arr + i) = rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int** arr, int& n, int value)
{
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];

	//2) Копируем содержимое исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = (*arr)[i];
	}

	//3) После того как все данные скопированы из исходного массива в буферный,
	//	 исходный массив больше не нужен, и его можно удалить:
	delete[] *arr;

	//4) Подменяем адрес исходного массива в указателе 'arr' адресом нового массива:
	*arr = buffer;

	//5) И только после всего этого можно написать вот так:
	(*arr)[n] = value;
	//поскольку только сейчас в массиве 'arr' появился еще один элемент, 
	//в который можно сохранить значение.

	//6) После того как мы добавили в массив элемент, количество элементов массива увеличивается на 1
	n++;
	//7) Mission complete - Элемент добавлен!
	//return *arr;
}
int* pushFront(int* arr, int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int* insert(int* arr, int& n, int value, int indexValue)
{
	int* Buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		Buffer[i] = arr[i];
	}
	delete[]arr;
	arr = Buffer;
	for (int i = n; i >= indexValue - 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[indexValue - 1] = value;
	n++;
	return arr;
}

int* PopBack(int* arr, int& n)
{
	n--;
	return arr;
}
int* PopFront(int* arr, int& n)
{
	int* Buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		Buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = Buffer;
	n--;
	return arr;
}
int* Erase(int* arr, int& n, int indexErase)
{
	int* Buffer = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (i == indexErase) continue;
		else if (i > indexErase ) Buffer[i - 1] = arr[i];
		else Buffer[i] = arr[i];
	}
	delete[] arr;
	arr = Buffer;
	n--;
	return arr;
}
/*
-------------------------------------------------
Debug Assertion Failed:
1. Удаление из статической памяти
2. Повторное удаление динамической памяти, а именно,
   когда оператору delete[] передали два раза один и тот же адрес.
-------------------------------------------------
*/