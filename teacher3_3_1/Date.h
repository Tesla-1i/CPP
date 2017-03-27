//多个头文件， 用#ifndef #define #endif
#ifndef DATE 
#define DATE

class Date
{
private:
	int year, month, day;
public:
	Date(int yr = 2017, int mh = 1, int dy = 1);
	~Date();
	int getYear();
	int getMonth();
	int getDay();
	void setDate(int y, int m, int d);
};

#endif