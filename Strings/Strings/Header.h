#ifndef STRING_H
#define STRING_H

using namespace std;

class String {
public:
	const char* name;
	//La clas he de incluir:
	/*

	string ("hello");
	string b(a);

	if(a=="")->tru;
	b="bye";

	*/
public:
	String() {}; //Constructor Vacio

	//Constructor que retorna el string
	String(const char* name) : name(name) {}; //(char* name);

	String(const String& s) : name(s.name) {}; //(s(name))


	String operator =(const String& s) {
		return (this->name = s.name);
	};

	/*String operator =(const char& w) {
		return name=(char*)w;
	};*/

	bool operator ==(const String& s) {
		return(this->name == s.name);
	}

	bool operator==(const char& w) {
		return(this->name == (char*)w);
	}

	/*bool checkString() {
		if (this->name == nullptr) return true;
	}*/

	bool checkString() {
		if (this->name == nullptr)return true;
		else return false;
	}
	void getName() const {
		printf("String = %s\n", this->name);
	}
};





#endif STRING_H
