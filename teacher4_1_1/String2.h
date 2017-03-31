#include "String1.h"
#include "myString.h"

#ifndef STRING2
#define STRING2

class String2 : public String1
{
public:
	String2();
	~String2();
	bool find(const char* f);
	bool deleteChar(char d);
	void replace(char r);
	void insert(char *i);
};

#endif