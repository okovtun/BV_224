#include<iostream> 
//#include<cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int number, copy, last_digit, weight, wo_first_digit, difference, wo_last_digit, first_digit;
	int i = 0;
	cout << "введите любое число ";
	cin >> number;

	copy = number;
	do
	{
		last_digit = copy % 10;
		wo_last_digit = (copy - last_digit) / 10;
		i++;
		copy = wo_last_digit;
	} while (copy >= 1);
	cout << "Разрядность числа: " << i << endl;
	copy = number;
	do
	{
		i--;
		last_digit = copy % 10;
		wo_last_digit = (copy - last_digit) / 10;
		copy = wo_last_digit;
		weight = pow(10, --i);
		wo_first_digit = copy % weight;
		first_digit = (copy - wo_first_digit) / weight;
		difference = first_digit - last_digit;
		copy = wo_first_digit;
	} while (copy >= 1 && i >= 1 && difference == 0);

	if (difference == 0)
	{
		cout << "это палиндром ";
	}
	else
	{
		cout << "это не палиндром ";
	}
}
