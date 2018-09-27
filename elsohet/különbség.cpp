#include "std_lib_facilities.h"
int main ()
{
	int a = 20;
	int b = 55;
	
	
	a = a+b; // 20+55=75
	b = a-b; // 75-55=20
	a = a-b;// 75-20=55
	
	cout << "Új értékek:\n" << "a: "<< a << '\n' << "b: " << b << '\n';
}
