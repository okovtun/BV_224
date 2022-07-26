#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
}

/*
	1. ����������� - ��� ������ ������
	2. ����������� - ��� ������ ��������

	Stack - ��� ������ ������, �� ������� ��������� ���������� ������� ����������� ������.
	LIFO - Last-In First-Out (��������� ����� - ������ �����).
	Stack - ������.
	������� ����� - ��������� ���������� �������, ������� ��������� ������.
	��� ����� - ������ ���������� �������, ������� ��������� ���������.

	Stack overflow exception
*/