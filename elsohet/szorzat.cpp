#include "std_lib_facilities.h"
int main ()
{
	int a = 10;
	int b = 5;
	
	a = a*b; 
	b = a/b;
	a = a/b;
	// A = jelentése legyen(az új érték),nem pedig egyenlő
	cout << "Új értékek:\n" << "a: "<< a << '\n' << "b: " << b << '\n';
}
