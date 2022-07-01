#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------\n"

//#define BASICS
//#define MATRIX_ADDITION

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 8;	//Количество строк
	const int COLS = 5;	//Количество элементов строки (столбцов)
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // BASICS

	//			TheMatrix:
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	//Заполняем матрицы случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}

	//Выводим матрицы на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	int C[ROWS][COLS]{};	//Матрица результат
#ifdef MATRIX_ADDITION
			//		Matrix addition:
//При сложении двух матриц A и B мы получаем третью матрицу С, каждый элемент которой
//является суммой соответствующих элементов слагаемых матриц.
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif // MATRIX_ADDITION

	//			Matrix multiplication:
	//При умножении матрицы A на матрицу B, мы получаем результтрующую матрицу C.
	//Для того чтобы получить один элемент матрицы C необходимо все элементы строки матрицы A
	//умножить на соответствующие элементы столбца матрицы B, и полученные произведения сложить.



	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
}