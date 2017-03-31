//#include<iostream>
//using namespace std;

#ifndef PERSON
#define PERSON

class Person
{
protected:
	int id;
public:
	Person(int i);
	~Person();
	void show();
};

#endif

/*Person::Person(int i)
{
	//this.id = id;
	id = i;
	cout << "Person构造函数执行\n";
}

Person::~Person()
{
	cout << "Person析构函数执行\n";
}*/



