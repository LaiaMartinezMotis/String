#ifndef HEADER_H
#define HEADER_H


class String {
public:
	const char* a;
	
public:
	String() {};//Constructor Vacio
	String(const char* a ): a(a) {};//Constructor al que se le pasa una palabra
	String(const String& str) : a(str.a) {};//Constructor al que se le pasa un string
	//
	String operator=(const String& str) {
		return a = str.a; //Operador que te permet cambiar
	}

};





#endif HEADER_H
