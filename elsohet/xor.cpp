#include "std_lib_facilities.h"

int main()
{

	int a=12, b=25;
	cout << "a: "<< a << " b: " << b << '\n';
	a = a^b; // "a" és "b" értékét xorozom
	b = b^a; // "a" és "b" xoros értékét xorozom "b" vel,ami visszadja "a"-t,és ez lesz a "b" új értéke
	a = a^b; // "a" és "b" xoros értékét xorozom "b" vel(aminek az új értéke "a"), tehát "a" új értéke "b"
	cout <<"Új értékek a csere után:\n" << "a: "<< a << " b: " << b << '\n';
	return 0;
}