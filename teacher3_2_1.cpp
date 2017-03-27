#include <iostream>

using namespace std;

class Carlo
{
public:
	int value;
	int weight;
public:
	static int sumValue;
	static int sumWeight;
	Carlo(int v = 0, int w = 0);
	~Carlo();
	void subVW();
};

int Carlo::sumValue = 0;
int Carlo::sumWeight = 0;
Carlo::Carlo(int v, int w){
	value = v;
	weight = w;
	sumValue += value;
	sumWeight += weight;
}
Carlo::~Carlo(){
	//sumValue -= value;
	//sumWeight -= weight;
}
void Carlo::subVW(){
	sumValue -= value;
	sumWeight -= weight;
}

//int Carlo::getValue(){
//	return value;
//}
//int Carlo::getWeight(){
//	return weight;
//}

int main(){
	int i;
	cout<<"请输入购进商品的个数\n";
	cin>>i;
	Carlo * carlo = new Carlo[i];
	//Carlo carlo[i];
	cout<<"请输入每件商品的价值和重量\n";
	int j;
	for(j = 0; j < i; j++){
		int v, w;
		cin>>v>>w;
		carlo[j].value = v;
		carlo[j].weight = w;
		Carlo::sumValue += v;
		Carlo::sumWeight += w;
	}
	int k;
	cout<<"请输入卖出的商品的个数\n";
	cin>>k;
	int l, m;
	for(l = 0; l < k; l++){
		cout<<"请输入第几件商品被卖出\n";
		cin>>m;
		carlo[m-1].subVW();
	}
	cout<<"剩余总价值："<<Carlo::sumValue<<"\n";
	cout<<"剩余总重量："<<Carlo::sumWeight<<"\n";
	delete [] carlo;	
	return 0;
}
