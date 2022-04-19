#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t"	//offset - смещение
//#define (определить) создает макроопределение (макрос)
//definition - определение
//offset - имя		"\t\t\t\t\t" - значение
#define delimiter "\n-------------------------------------\n"

//#define ELOCHKA
//#define TASK_1
//#define TASK_2
#define TASK_3

//строчный комментарий
/*
	Блочный комментарий
*/

//Комментарии - это код, который игнорируется компилятором.

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
//если определено ELOCHKA, 
	//значит нижеследующий код будет виден компилятору, до директивы #endif
	cout << offset << delimiter << endl;
	cout << offset << "В лесу родилась елочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << endl;
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи елочка, бай-бай\"\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << "\n";
	cout << offset << "Трусишка, зайка серенький\n";
	cout << offset << "Под елочкой скакал\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n";
	cout << offset << "Чу, снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\n";
	cout << offset << "Лошадка мохноногая,\n";
	cout << offset << "Торопиться бежит.\n";
	cout << "\n";
	cout << offset << "Везет лошадка дровенки\n";
	cout << offset << "А в дровнях старичок\n";
	cout << offset << "Срубил он нашу елочку,\n";
	cout << offset << "Под самый корешок.\n";
	cout << "\n";
	cout << offset << "И вот она нарядная\n";
	cout << offset << "На праздник к нам пришла\n";
	cout << offset << "И много-много радости,\n";
	cout << offset << "Детишкам принесла.\n";

	cout << delimiter << endl;
#endif

#if defined TASK_1

#endif

#ifdef TASK_2
	ljshflsahfdldshgfld
#endif // TASK_2


}