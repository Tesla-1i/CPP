namespace Outer{
	int i;
	void f();
	namespace Inner{
		int i;
		void f(){
			i++;
		}
		void g(){
			i++;
		}
		void h();
	}
}
void Outer::f(){
	i--;
}
void Outer::Inner::h(){
	i--;
}
