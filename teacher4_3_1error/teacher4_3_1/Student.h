#include"Person.h"

#ifndef STUDENT
#define STUDENT

class Student:virtual public Person
{
public:
	Student(int iP, int iS, char *n, int g, int *C);
	~Student();
	void show();
protected:
	int id;
	char *name;
	//char name[20];
	int grade;
	//char Class[20];
	int *Class;
};

#endif

