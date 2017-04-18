#include <iostream>
using namespace std;

class Box
{
public:
	int side;
	Box(int s = 0){
		side = s;
	}
	~Box(){}
	
};

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
};

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
	cout<<"请输入四个整数\n";
	Array<int> arr(4);
	arr.set();
	arr.sort();
	for(int i = 0; i < 4; i++)
		cout<<arr.array[i]<<" ";
	return 0;
}
