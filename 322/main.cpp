#include <iostream>
#include "out.h"
//使用指令
using namespace std;
using namespace Outer;
//使用声明
using Inner::g;
using Inner::h;

int main(){
	i = 0;
	f();
	Inner::f();
	Inner::i = 0;
	g();
	h();
	cout<<"你好\n";
	cout<<"Outer::i = "<<i<<", Inner::i = "<<Inner::i<<"\n";
	return 0;
}