#include"Date.h"

class Person
{
private:
	char *number;
	char *name;
	char *id;
	Date birthday;
	char sex;
public:
	~Person();
	void setData();
	void getData();
};