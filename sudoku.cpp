#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
#include<string>
#include"main_table.h"
using namespace std;

void main()
{
	main_table C;
	C.input(3);
	C.print_arr();
	cout<<endl;
	C.ptint_ref_arr();
	char a=_getch();
	cout<<a<<endl<<C.user_input(a,0,0)<<endl;
	C.print_arr();
	 a=_getch();
	cout<<a<<endl<<C.user_input(a,0,0)<<endl;
	C.print_arr();
	_getch();
	
}
