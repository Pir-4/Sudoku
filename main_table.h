#pragma once
#include<iostream>
#include<conio.h>


class main_table
{
	int**arr;
	int**ref_arr;
public:
	
	main_table(void);//создание основного и проверочного массивов
	~main_table(void);//удаление основного и проверочного массивов

	void input(int);//заполнение массивов начальными данными

	void print_arr();//вывод на экран основного массива
	void ptint_ref_arr();//ввывод на экран проверочного массива

	bool shift_cursor(char,int &, int &);//обработка нажатия и сдвиг координат курсора
	bool check_retries(int ,int,int);//проверка по всем параметрам
	bool check_line(int,int,int);//проверка совпадающих значений в строке
	bool check_column(int, int,int);//проверка совпадающих значений в стобце
	bool check_square(int,int,int);//проверка совпадающих значених по квадрату

	bool user_input(int,int,int);//ввод данных пользователем
	bool  chack_all();// проверяет всю вспомогательную таблицу на потоврение и заполнение. 
};

