#include "Myarray.h"

#ifndef REVARRAY
#define REVARRAY

class Revarray :virtual public Myarray
{

public:
	Revarray(int leng);
	~Revarray();
	void revArray();
};

#endif