#ifndef STRING_H
#define STRING_H
#include <string.h>
#include <assert.h>

class String {

private:
	char* string = nullptr;
	unsigned int allocated_memory = 0u;
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
	String(const char* string) {
		assert(string!=nullptr);
		if (string != nullptr) {
			allocated_memory = (unsigned int) strlen(string) + 1;
			this->string = new char[allocated_memory];
			strcpy_s(this->string,allocated_memory, string);
		}
	}; 
	
	
	String(const String& s) {

		assert(s.string != nullptr);

		if (s.string != nullptr) {
			allocated_memory = (unsigned int)strlen(s.string) + 1;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, s.string);
		}
	};

		~String() {

			assert(string != nullptr);

			if (string != nullptr) {
				delete[] string;
				string = nullptr;
				allocated_memory = 0u;
			}
		}
	
	//(char* name);

	


	String operator = (const char* s) {

		
		if (s != nullptr) {
			allocated_memory = (unsigned int)strlen(s) + 1;
			delete[] s;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, s);
		}
	
		return *this;
	};

	/*String operator = (const String &st) {
		if (st != nullptr) {
			allocated_memory = (unsigned int)strlen(st) + 1;

		}
	}*/

	/*String operator =(const char& w) {
		return name=(char*)w;
	};

	bool operator ==(const String& s) {
		return(this->string == s.string);
	}

	bool operator==(const char& w) {
		return(this->string == (char*)w);
	}*/

	/*bool checkString() {
		if (this->name == nullptr) return true;
	}*/

	/*bool checkString() {
		if (this->string == nullptr)return true;
		else return false;
	}*/

	void getName() const {
		printf("String = %s\n", this->string);
	}
	
};





#endif STRING_H
