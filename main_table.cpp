#include "main_table.h"
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdio.h>

using namespace std;

main_table::main_table(void)//создание главного и мпроверочного массива
{
	arr = new int*[9];
	for (int i = 0; i < 9; i++)
		arr[i] = new int[9];

	ref_arr=new int*[9];
	for(int i=0;i<9;i++)
		ref_arr[i]=new int[9];
}

main_table::~main_table(void)//уничтожение главного и проверочного массива
{
	for (int i = 0; i < 9; i++)
	{
		delete [] (arr[i]);
	}
	delete []arr;

	for (int i = 0; i < 9; i++)
	{
		delete [] (ref_arr[i]);
	}
	delete [] ref_arr;
}

void main_table::input(int nlevel)//ввод начальных значений в основной и проверочный массивы
{
	ifstream infile ("Maps.txt", ios::in);
	for(int f=1;f<nlevel;f++)
	{
		string st;
		infile >> st;
	}

	for(int i=0; i<9; i++)
	{
		char x;
		int g;
		for(int f=0; f<9; f++)
		{
			infile >> x;
			g=x-48;
			arr[i][f]=g;

			if(g!=0)
			{
				ref_arr[i][f]=1;
			}
			else
			{
				ref_arr[i][f]=0;
			}
		}
	}
	infile.close();
}
void main_table::print_arr()//вывод основоного массива
{
	for(int i=0;i<9;i++)
	{
		for(int f=0;f<9;f++)
		{
			cout<<arr[i][f]<<" ";
		}
		cout<<endl;
	}
}
void main_table::ptint_ref_arr()//вывод проверочного массива
{
	for(int i=0;i<9;i++)
	{
		for(int f=0;f<9;f++)
		{
			cout<<ref_arr[i][f]<<" ";
		}
		cout<<endl;
	}
}
bool main_table::shift_cursor(char press, int &i, int &f)//обработка нажатия на сдвиг курсора в масиве
{
	if((press<=90)&&(press>=65))
	{
		press=press+32;
	}

	switch(press)
	{
	case 'w':
		{
			i-- ;
			if(i<0) 
			{
				i=0;
			};
			break;
		}
	case 's': 
		{
			i++;
			if(i>9) 
			{
				i=9;
			};
			break;
		}
	case 'a': 
		{
			f--;
			if(f<0) 
			{
				f=0;
			};
			break;
		}
	case 'd': 
		{
			f++;
			if(f>9)
			{
				f=9;
			};
			break;
		}
	default: return 0;break;
	}
	return 1;
}

bool main_table::check_retries(const int data,const int i,const int f)//проверка по всем параметрам
{
	if(this->check_column(data,f,i))
	{
		return 1;
	}
	if(this->check_line(data,i,f))
	{
		return 1;
	}
	if(this->check_square(data,i,f))
	{
		return 1;
	}
	return 0;

}
bool main_table::check_line(const int data,const int i, const int j)//проверка совпадающих значений в строке
{
	for(int f=0;f<9;f++)
	{
		if((data==arr[i][f])&&(f!=j))
		{
			return 1;
		}
	}
	return 0;
}
bool main_table::check_column(const int data,const int f,const int j)//проверка совпадающих значений в стобце
{
	for(int i=0;i<9;i++)
	{
		if((data==arr[i][f])&&(i!=j))
		{
			return 1;
		}
	}
	return 0;
}
bool main_table::check_square(const int data,const int i,const int f)//проверка совпадающих значений по квадрату.
{
	int il;
	int ir;
	int fl;
	int fr;
	switch (i/3)
	{
	case 0:{il=0;ir=3;}break;
	case 1:{il=3;ir=6;}break;
	case 2:{il=6;ir=9;};break;
			 default:{il=6;ir=9;}
	}
	switch (f/3)
	{
	case 0:{fl=0;fr=3;}break;
	case 1:{fl=3;fr=6;}break;
	case 2:{fl=6;fr=9;};break;
			 default:{fl=6;fr=9;}
	}

	for(int j=il;j<ir;j++)
	{
		for(int k=fl;k<fr;k++)
		{
			if((data==arr[j][k])&&(j!=i)&&(k!=f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool main_table::user_input(const int data,const int i,const int f)//запись  данных в основную и вспомогательную таблицы 
{
	if(ref_arr[i][f]==1)
	{
		return 1;
	}
	else
	{
		if(check_retries(data,i,f))
		{
			ref_arr[i][f]=-1;

		}
		else
		{
			ref_arr[i][f]=2;
		}
		arr[i][f]=data;
	}
	return 0;
}
bool main_table::chack_all()// проверяет всю вспомогательную таблицу на потоврение и заполнение. 
{
	for(int i=0;i<9;i++)
	{
		for(int f=0;f<9;f++)
		{
			if(ref_arr[i][f]<=0)
			{
				return 1;
			}
		}
	}
	return 0;
}