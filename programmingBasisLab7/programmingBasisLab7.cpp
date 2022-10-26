﻿#include <iostream>
#include "List.h"
using namespace std;

/*
Задание
1. Разработать архитектуру приложения, описать и реализовать необходимый класс в соответствии с заданным вариантом.
2. На основе п.1 составить алгоритм решения задачи и разработать приложение.
3. Произвести тестирование разработанного приложения.

Порядок выполнения работы
Произвести чтение данных в единую структуру согласно варианту. Должна быть обеспечена корректная работа с динамической памятью.
Программа должна быть структурирована и разбита на функции. Предусмотреть форматированный вывод данных в удобном для пользователя виде.

10.	Дана последовательность X1, X2, ... X15. Исключить из неё элемент, позиция которого совпадает с числом K.

Был выбран односвязный линейный тип списка.
При заполнении списка для большей наглядности вместо случайных чисел были выбраны квадраты последовательностей чисел.
*/

int main()
{
    setlocale(LC_ALL, "ru");
    List list(0);
    int i = 0;


    while (i != -1)
    {
        switch (i)
        {
        case 0:
        {
            cout << "Введите 1 чтобы сгенерировать новый список из 15 элементов" << endl;
            cout << "Введите 2 чтобы удалить элемент, номер которого совпадает с введённым значением" << endl;
            cout << "Введите 3 чтобы вывести текущий список" << endl;
            cout << "Введите любое другое целое число(кроме 0) чтобы выйти из программы" << endl;
            cin >> i;
            cout << endl;

            break;
        }
        case 1:
        {
            list.CreateList(15);

            i = 0;
            break;
        }
        case 2:
        {
            list.DeleteByNum();

            i = 0;
            break;
        }
        case 3:
        {
            list.PrintList();

            i = 0;
            break;
        }
        default:
        {
            i = -1;
        }
        }
    }




    return 0;
}
