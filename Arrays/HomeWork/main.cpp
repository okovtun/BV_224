#include<iostream>
using namespace std;

#define Hexadecimal
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef Hexadecimal
	int chislo;
	const int MAX_SIZE = 8;
	int ost[MAX_SIZE] = {};
	cout << "������� �����: "; cin >> chislo;

	int i = 0;
	//int kolvo = 0;
	while (chislo)
	{
		ost[i] = chislo % 16;
		chislo = chislo / 16;
		i++;
		//kolvo = i;               //�� ����� ������� ����� � ��� � �������
	}
	for (--i; i >= 0; i--)
	{
		//cout << ost[i] << tab;   //������� ������� � �������� �������

		const int n = 6;                       //������ ��� ����
		int arr[n] = { 65,66,67,68,69,70 };
		int j = 0;
		int y = 0;
		bool exit = true;
		while (j != ost[i])
		{
			j = y;
			for (int m = 0; m < 10; m++)  //for ��� ����
			{
				if (j == ost[i])
				{
					cout << ost[i]; //���������� ������ ��������� � ����� ������
					exit = false;
					break;
				}
				j++;
			} y = j;
			if (exit == false) break;

			for (int k = 0; k < 6; k++)     //for ��� ����
			{
				if (j == ost[i])
				{
					j = arr[k];
					cout << (char)j;
					exit = false;
					break;
				}
				j++;
			} if (exit == false) break;
			cout << endl;
		}
	}
}
#endif