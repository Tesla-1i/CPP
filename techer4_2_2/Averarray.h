#include "Myarray.h"

#ifndef AVERARRAY
#define AVERARRAY

class Averarray :virtual public Myarray
{
private:
	double average;
public:
	Averarray(int leng);
	~Averarray();
	void setAverage();
	void getAverage();
};

#endif