#include<iostream>
using namespace std;

int sumMaxMin(int *array, int &m, int &n, int &max, int & min){
	//int  m * n;
	int i, j, sum = 0;
	cout<<"请输入m*n个数\n";
	for(i = 0; i < m*n; i++){
		cin>>array[i];
		sum = sum + array[i];
	}
	max = array[0];
	min = array[0];
	for(i = 1; i < m*n; i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	for(i = 1; i < m*n; i++){
		if(min > array[i] ){
			min = array[i];
		}
	}
	return sum;
}

int main(){
	int m, n;
	cout<<"请输入m, n"<<"\n";
	cin>>m;
	cin>>n;
	int *array = new int[m*n];
	int max, min;
	int sum = sumMaxMin(array, m, n, max, min);
	cout<<"sum = "<<sum<<" max = "<<max<<" min = "<<min<<"\n";
	delete[] array; 
}
