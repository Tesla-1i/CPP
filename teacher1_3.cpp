
#include <iostream>
using namespace std;

int main(){
	int i, j, k, sum;
	for(i = 0; i <= 20; i++){
		for(j = 0; j <= 50; j++){
			//for(k = 0; k <= 100; k++){
				//if(i * 5 + j * 2 + k * 1 == 100)
				if(i * 5 + j * 2 <= 100)
					sum++;
			//}
		}
	}
	cout<<"方式有:"<<sum<<"种\n";
	return 0;
}
