#ifndef MARRAY
#define MARRAY

class Myarray
{
private:
	int *alist;
	int length;
public:
	Myarray(int leng);
	Myarray(const Myarray& m);
	~Myarray();
	void input();
	void display();
	int getLength();
	int *getAlist();
};

#endif