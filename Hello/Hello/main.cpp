﻿#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\t\t\t\t\tHello\t\"World\"!\n";
	cout << "Привет Мир!\n";
	cout << "C:\\Windows\\System32\\drivers\\\n";
}
/*
-------------------------------------------------------
#include<iostream>
# - показывает, что include - это директива.
Директива - это указание компилятору на выполнение некоторых действий.
Директива #include (включить, подключить) 

iostream содержит потоки ввода/вывода - cin/cout.
<> - компилятор будет искать его в системных каталогах Visual Studio.
"" - компилятор будет искать его в каталого с проектом.

-------------------------------------------------------
using namespace std; Говорит компилятору использовать пространство имен std;
cin/cout
-------------------------------------------------------
void main()
main() - это главная функция, которая является точкой входа в программу,

void (пустота) показывает, что функция main() ничего не возвращает
-------------------------------------------------------
cout (Console Out) - поток вывода на экран.
<< - оператор перенаправления в поток.

-------------------------------------------------------
*/
/*
----------------------------------------
		Escape-последовательности (Esc)
\ - Backslash (Обратная косая черта)
/ - Slash (Косая черта)
\ (Backslash) - это символ отмены специального значения другого символа
\a - 
\" - backslash отменяет специальное значение кавычек
\\ - backslash отменяет специальное значение самого себя

\n - newline. Переводит курсор в начало новой строки.
\t - tab. Выводит в консоль символ табуляции.
----------------------------------------
*/