//FOR
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*for (;;)
	{
		cout << "Hello ";;;;;;;;;;
	}*/

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
}