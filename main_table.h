#pragma once
#include<iostream>
#include<conio.h>


class main_table
{
	int**arr;
	int**ref_arr;
public:
	
	main_table(void);//�������� ��������� � ������������ ��������
	~main_table(void);//�������� ��������� � ������������ ��������

	void input(int);//���������� �������� ���������� �������

	void print_arr();//����� �� ����� ��������� �������
	void ptint_ref_arr();//������ �� ����� ������������ �������

	bool shift_cursor(char,int &, int &);//��������� ������� � ����� ��������� �������
	bool check_retries(int ,int,int);//�������� �� ���� ����������
	bool check_line(int,int,int);//�������� ����������� �������� � ������
	bool check_column(int, int,int);//�������� ����������� �������� � ������
	bool check_square(int,int,int);//�������� ����������� �������� �� ��������

	bool user_input(int,int,int);//���� ������ �������������
	bool  chack_all();// ��������� ��� ��������������� ������� �� ���������� � ����������. 
};

