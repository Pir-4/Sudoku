#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
#include"main_table.h"
using namespace std;

void main()
{
	main_table C;
	C.input(3);
	C.print_arr();
	cout<<endl;
	C.ptint_ref_arr();
	_getch();
	
}
