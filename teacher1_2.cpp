#include <iostream>
using namespace std;
int m, n;
//数组无引用
int sumMaxMin(int &array,int &max, int &min){
	int i, j, sum;
	for( i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin>>array[m][n];
			sum += array[m][n];
		}
	}
	int max = array[m][n];
	int min = array[m][n];
	for(i = 0; i < m; i++){
		for(j = 0; j < n - 1; j++){
			max = (max > array[m][n] ? max : array[m][n]);
			min = (min < array[m][n] ? min :array[m][n]);
		}
	}
	return sum;
}

int main(){
	//int m, n;	m * n 数组
	cout<<"请输入m和n\n";
	cin>>m>>n;
	int *array = new int [m][n];
	int max, min;
	int sum = sumMaxMin(array, max, min);
	cout<<"sum = "<<sum<<" max = "<<max<<" min = "<<min<<"\n";
	return 0;
	/*for( i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin>>array[m][n];
			sum += array[m][n];
		}
	}
	int max = array[m][n];
	int min = array[m][n];
	for(i = 0; i < m; i++){
		for(j = 0; j < n - 1; j++){
			max = (max > array[m][n] ? max : array[m][n]);
			min = (min < array[m][n] ? min :array[m][n]);
		}
	}*/
}