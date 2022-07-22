#pragma once
#include"stdafx.h"
#include"constants.h"

//template - объ€вл€ет шаблон
//typename - объ€вл€ет шаблонный тип данных
//T - им€ шаблонного типа
template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);