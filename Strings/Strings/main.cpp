#include <iostream>
#include "String.h"
#include <stdio.h>


using namespace std;

int main() {

	String string;

	String string1("hello");

	String string2(string1);


	cout << "String Class: " << endl;

	string.getName();
	string1.getName();
	string2.getName();






	system("pause");
	return 0;
}
