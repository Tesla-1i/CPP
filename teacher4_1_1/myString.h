#ifndef MYSTRING
#define MYSTRING

class myString
{
protected:
	char *pStr;
public:
	myString(char *m=0);
	myString(const myString&mS);
	~myString();
	void set(char *m);
	void print();
};

#endif