#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FIBONACCI_NUMBERS
//#define FIBONACCI_LIMIT

void main()
{
	setlocale(LC_ALL, "");
#ifdef FIBONACCI_NUMBERS
	int num_fibonacci;
	cout << "������� ���������� ����� ���� ���������:"; cin >> num_fibonacci;
	long long* Fibonacci = new long long[num_fibonacci] {0, 1};
	for (int i = 2; i < num_fibonacci; i++)
	{
		Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
	}
	for (int i = 0; i < num_fibonacci; i++)
	{
		cout << Fibonacci[i] << "\t";
	}
	cout << endl;
	delete[] Fibonacci;
#endif

#ifdef FIBONACCI_LIMIT
	long long lim_num_fibonacci;//�����,������ �������� ��������� ����� �� ���� ���������
	cout << "������� ���������� �����, �� �������� ������ ������� ��� ���������: "; cin >> lim_num_fibonacci;
	int size_fibonacci = 1;//������ ������� ��� ������
	int a = 0;//������ � ������������������
	int b = 1;//���������
	int c = 0;//��������� �� ���������
	for (; ;)//������ ������ ������� ��� ���������
	{
		if (b < lim_num_fibonacci)
		{
			c = a + b; size_fibonacci++;
		}
		else break;
		if (c < lim_num_fibonacci)
		{
			a = b + c; size_fibonacci++;
		}
		else break;
		if (a < lim_num_fibonacci)
		{
			b = a + c; size_fibonacci++;
		}
		else break;
	}

	long long* Fibonacci = new long long[size_fibonacci] {0, 1};//������� ������ ��� ���� ���������
	for (int i = 2; i < size_fibonacci; i++)//���������� ������� ������� �� ���� ���������
	{
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}
	for (int i = 0; i < size_fibonacci; i++)//����� �� �����
	{
		cout << Fibonacci[i] << "\t";
	}
	cout << endl;
	delete[] Fibonacci;
#endif

	/*int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;*/

	int n;
	cout << "������� ���������� ������ ����: "; cin >> n;
	for (int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
	{
		cout << a << "\t";
	}
	cout << endl;
}
