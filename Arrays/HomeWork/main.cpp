#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int nul[n];

	cout << "������� �������� ��������� �������: ";
	for (int i = 0; i < n; i++) cin >> arr[i];                 //���� �������

	for (int i = 0; i < n; i++) cout << arr[i] << tab;         //����� �������
	cout << endl;

	for (int i = 0; i < n; i++) nul[i] = arr[i];               //�������� ����� �������

	int shift;
	cout << endl << "������� �������� �����: "; cin >> shift;  // ���� ������

	int t = n - shift;
	for (int i = 0; i < t; i++) arr[i] = arr[i + shift];       //����� ������ t �����

	for (int i = 0; i < shift; i++)                            //����� "������" ����� (n-t=shift)
	{
		arr[t] = nul[i];
		t++;
	}

	for (int i = 0; i < n; i++) cout << arr[i] << tab;         //����� ���������� �������
}