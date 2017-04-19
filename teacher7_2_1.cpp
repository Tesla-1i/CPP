#include <iostream>
using namespace std;

class Box;
istream& operator >>(istream& in, Box & a);
ostream& operator <<(ostream& out, Box &a);
//Box ��Ҫ�����±������
class Box
{
public:
	int side;
	Box(int s = 0){
		side = s;
	}
	~Box(){}
	int& operator [](int i){
		return this->side;
	}
	friend istream& operator >>(istream& in, Box & a);
	friend ostream& operator <<(ostream& out, Box &a);
	Box& operator +=(Box& a);
	bool operator > (Box &a);
	bool operator ==(Box &a);

};

Box& Box::operator +=(Box& a){
	side += a.side;
	return *this;
}

ostream& operator <<(ostream& out, Box& a){
	out<<a.side;
	return out;
}

bool Box::operator >(Box &a){
	if(side > a.side)
		return true;
	else
		return false;
}

bool Box::operator ==(Box &a){
	if(side == a.side)
		return true;
	else
		return false;
}

template <class T>
class Array
{
public:
	int size;
	T * array;
	Array(int s = 0){
		size = s;
		array = new T[size];
	}
	void set(){
		for(int i = 0; i < size; i++)
			cin>>array[i];
	}
	~Array(){
		delete [] array;
	}
	void sort();
	bool find(T key);
	T sum();
	//friend istream& operator >>(istream& in, Array & a);
};

istream& operator >>(istream& in, Box & a){
	//for (int i = 0; i < size; i++)
	in>>a.side;
	return in;
}

template<class T>
void Array<T> :: sort(){
	int  i, j;
	T key;
	for(i = 1; i < size; i++){
		key = array[i];
		for(j = i - 1; j >= 0; j--){
			if(array[j] > key)
				array[j+1] = array[j];
			else
				break;
		}
		array[j+1] = key;
	}
}

template<class T>
bool Array<T> :: find(T key){
	int i;
	for(i = 0; i < size; i++){
		if(array[i] == key)
			return true;
	}
	return false;
}


template<class T>
T Array<T> :: sum(){
	int i;
	T s = 0;
	for(i = 0; i < size; i++)
		s += array[i];
	return s;
}

int main(){
	cout<<"�������ĸ�����\n";
	Array<int> arr(4);
	arr.set();
	arr.sort();
	for(int i = 0; i < 4; i++)
		cout<<arr.array[i]<<" ";
	int f;
	cout<<"��������ҵ�����\n";
	cin>>f;
	if(arr.find(f))
		cout<<"����\n";
	else
		cout<<"������\n";
	cout<<"sum = "<<arr.sum()<<endl;
	cout<<"�������ĸ�Box�ı߳�\n";
	Array<Box> arr1(4);
	//cin>>arr1.array[0];
	arr1.set();
	arr1.sort();
	for( i = 0; i < 4; i++){
		cout<<arr1.array[i]<<" ";
	}
	int h;
	cout<<"��������ҵı߳�\n";
	cin>>h;
	if(arr1.find(h))
		cout<<"����\n";
	else
		cout<<"������\n";
	cout<<"sum = "<<arr1.sum()<<endl;
	return 0;
}
