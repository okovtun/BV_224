#include<iostream>
using namespace std;

//#define SQUARE

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}