#include "eecs230.h"

// implement fun_sum function here


// implement fun_max function here


template<typename T>
void print(T a, const string& s) {
	cout << s << a << endl;
}

int main() {
	int ai = 1, bi = 2;
	double ad = 1.2, bd = 3.4;

	int sumi = 0, maxi = 0;
//	sumi = fun_sum(ai,bi);
//	maxi = fun_max(ai,bi);
	print(sumi,"int: ai + bi = ");
	print(maxi,"int: max(ai,bi) = ");

	double sumd = 0, maxd = 0;
//	sumd = fun_sum(ad,bd);
//	maxd = fun_max(ad,bd);
	print(sumd, "double: ad + bd = ");
	print(maxd, "double: max(ad,bd) = ");

	// add a test case here


	return 0;
}
	
