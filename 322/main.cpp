#include <iostream>
#include "out.h"
//ʹ��ָ��
using namespace std;
using namespace Outer;
//ʹ������
using Inner::g;
using Inner::h;

int main(){
	i = 0;
	f();
	Inner::f();
	Inner::i = 0;
	g();
	h();
	cout<<"���\n";
	cout<<"Outer::i = "<<i<<", Inner::i = "<<Inner::i<<"\n";
	return 0;
}