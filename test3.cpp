#include <iostream>
using namespace std;

class Father
{
private:
	int i;
public:
	Father(int i){
		this->i = i;
	}
	~Father(){

	}
	void setI(int i){
		this->i = i;
	}
	int getI(){
		return i;
	}
	void show(){
		cout<<"i = "<<i<<endl;
	}
};

class Child :public Father
{
public:
	Child(int i ):Father(i){

	}
	~Child(){

	}
	void showChildFather(){
		show();
	}
	//void showChild(){
	//	cout<<i;
	//}
	
};