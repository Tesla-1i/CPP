#include <iostream>

using namespace std;
class Animal;
void setValue(Animal& animal, int w);
void setValue(Animal& animal, int w, int a);

class Animal
{
	int itsWeight;
	int itsAge;
public:
	Animal():itsWeight(0),itsAge(0),weight(100),age(1){}
	void show();
	void setData();
	friend void setValue(Animal& animal, int w);
	friend void setValue(Animal& animal, int w, int a);
	int getWeight();
	int getAge();
	int weight;
	int age;
};

void Animal::show(){
	cout<<"重量 "<<itsWeight<<" 年龄 "<<itsAge<<endl;
}
void Animal::setData(){
	cout<<"请输入动物的重量 年龄\n";
	int ww, aa;
	cin>>ww>>aa;
	itsWeight = ww;
	itsAge = aa;
}

int Animal::getWeight(){
	return itsWeight;
}
int Animal::getAge(){
	return itsAge;
}

void setValue(Animal&  animal, int w){
	animal.itsWeight = w;
}

void setValue(Animal& animal, int w, int a){
	animal.itsWeight = w;
	animal.itsAge = a;
}

int main(){
	Animal peppy;
	cout<<"通过友元函数访问\n";
	setValue(peppy, 5);
	peppy.show();
	setValue(peppy, 7, 9);
	peppy.show();
	cout<<"通过成员函数访问\n";
	peppy.setData();
	peppy.show();
	cout<<"通过公有数据访问\n";
	//peppy.itsWeight = weight;
//	peppy.getWeight() = peppy.weight;
//	peppy.getAge() = peppy.age;
	
	peppy.show();
	return 0;
}