


class Person
{
private:
	char number[10];
	char name[10];
	char id[10];
	Date birthday;
	char sex;
public:
	Person(char *nr, char *ne, char *id, char sx, int y, int m, int d);
	~Person();
	//void setData();
	void getData();
};