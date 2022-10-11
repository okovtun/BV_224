#include<iostream>
#include<boost/algorithm/string.hpp>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//https://cplusplus.com/doc/tutorial/constants/
	cout << sizeof('+') << endl;
	cout << sizeof("0") << endl;
	cout << 5 << endl;
	cout << 3.14 << endl;
	for (unsigned char i = 1; i; i++)
		cout << i << " ";
	cout << endl;

	char str[] = "  Hello     World!      ";
	cout << str << endl;
	cout << str << endl;
	//boost::trim(str);
	cout << str << endl;
}