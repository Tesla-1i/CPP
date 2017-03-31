#include "myString.h"

#ifndef STRING1
#define STRING1

class String1 :public myString
{
protected:
	int len;
public:
	String1();
	~String1();
	int getLen();
	char *getStr();
	void connect(const char*p);
	int compare(const char*p);
};

#endif