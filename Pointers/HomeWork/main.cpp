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
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	cout << "�������� ������" << endl;
	Print(arr, n);

	int value;
	cout << "������� ����������� ��������: "; cin >> value;

	push_back(&arr, n, value);
	//int - int
	//int* - ��������� �� int
	//int** - ��������� �� ��������� �� int
	cout << "�������� ������ � ���������� ��������� � �����" << endl;
	Print(arr, n);
	/*arr = pushFront(arr, n, value);
	cout << "�������� ������ � ����������� ��������� � ����� � � ������" << endl;
	Print(arr, n);
	int indexValue;
	cout << "������� ������ ������������ ��������: "; cin >> indexValue;
	arr = insert(arr, n, value, indexValue);
	cout << "�������� ������ � ����������� ��������� � �����, � ������ � �� ������" << endl;
	Print(arr, n);*/

	/*arr = PopBack(arr, n);
	cout << "�������� ������ � ��������� ������ �������� � �����" << endl;
	Print(arr, n);*/

	/*arr = PopFront(arr, n);
	cout << "�������� ������ � ��������� ������ �������� ������� " << endl;
	Print(arr, n);*/

	int indexErase;
	cout << "������� ������ ��������, ������� ����� ������ �� �������: "; cin >> indexErase;
	arr = Erase(arr, n, indexErase);
	Print(arr, n);

	delete[] arr;//Memory leaks
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//����� ���������� ���������� � �������� �������������
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
	//1) ������� �������� ������ ������� �������:
	int* buffer = new int[n + 1];

	//2) �������� ���������� ��������� ������� � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = (*arr)[i];
	}

	//3) ����� ���� ��� ��� ������ ����������� �� ��������� ������� � ��������,
	//	 �������� ������ ������ �� �����, � ��� ����� �������:
	delete[] *arr;

	//4) ��������� ����� ��������� ������� � ��������� 'arr' ������� ������ �������:
	*arr = buffer;

	//5) � ������ ����� ����� ����� ����� �������� ��� ���:
	(*arr)[n] = value;
	//��������� ������ ������ � ������� 'arr' �������� ��� ���� �������, 
	//� ������� ����� ��������� ��������.

	//6) ����� ���� ��� �� �������� � ������ �������, ���������� ��������� ������� ������������� �� 1
	n++;
	//7) Mission complete - ������� ��������!
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
1. �������� �� ����������� ������
2. ��������� �������� ������������ ������, � ������,
   ����� ��������� delete[] �������� ��� ���� ���� � ��� �� �����.
-------------------------------------------------
*/