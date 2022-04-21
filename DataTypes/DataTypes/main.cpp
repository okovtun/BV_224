//DataTypes
#include<iostream>
using namespace std;

//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;
	//cout << false << endl;

#ifdef INTEGRAL_TYPES
	cout << sizeof(int) << endl;
	INT_MIN;	//минимальное значение для int
	INT_MAX;	//максимальное значение для int
	UINT_MAX;	//максмальное значение для unsigned int
	cout << "unsigned int: " << 0 << " ... " << UINT_MAX << endl;
	cout << "  signed int: " << INT_MIN << " ... " << INT_MAX << endl;
#endif // INTEGRAL_TYPES

	//cout << sizeof(float) << endl;
	//cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
}