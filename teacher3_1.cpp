
//�������Ϊ3 3
#include <iostream>
 using namespace std;
 class A {
         static int m_counter;
         public:
			A();
			~A();
			static void display();
};

int A::m_counter = 0;

A::A()
{
	m_counter++;
}
A::~A()
{
m_counter--;
}
void A::display()
{
	cout<<"THere are: "<<A::m_counter<<" objects of class A.\n";
	//cout<<��There are:��<<A::m_counter<<��objects of class A.\n��;
}

int main()
{
	A a1;
	A a2;
	A a3;
 	A::display();
	a1.display();
	return 0;
}
