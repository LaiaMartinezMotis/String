#include <iostream>
#include "Header.h"

using namespace std;
int main() {

	String one("hello");
	String two(one);
	cout << one.a << endl;
	cout << two.a << endl;
	
	one = "bye";
	cout << one.a << endl;








	system("pause");
	return 0;
}

