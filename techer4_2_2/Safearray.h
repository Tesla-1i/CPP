#include "Myarray.h"
#include "Averarray.h"
#include "Revarray.h"

#ifndef SAFE
#define SAFE

class Safearray :public Averarray, public Revarray
{
public:
	Safearray(int leng);
	~Safearray();
	
};

#endif