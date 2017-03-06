class Son;		//在定义一个类时，如果需要另一个类，一定要提前声明
class Father{
private:
	char name[16];
	int  money;		//money 类型写错，导致出现bug !!!!!!!!!!!!!!!!!!!!!
	int pay(int m);		//保护支付函数
public:
	Father(char *n, int m);
	char * getName();
	void receive(int m);
	void print();
	int manage(Son *role, int m);
};