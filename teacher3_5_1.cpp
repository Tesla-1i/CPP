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
	cout<<"���� "<<itsWeight<<" ���� "<<itsAge<<endl;
}
void Animal::setData(){
	cout<<"�����붯������� ����\n";
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
	cout<<"ͨ����Ԫ��������\n";
	setValue(peppy, 5);
	peppy.show();
	setValue(peppy, 7, 9);
	peppy.show();
	cout<<"ͨ����Ա��������\n";
	peppy.setData();
	peppy.show();
	cout<<"ͨ���������ݷ���\n";
	//peppy.itsWeight = weight;
//	peppy.getWeight() = peppy.weight;
//	peppy.getAge() = peppy.age;
	
	peppy.show();
	return 0;
}