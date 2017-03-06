class Son{
private:
	char name[16];
	int money;
	Father *father;
public:
	Son(Father *p, char *n, int m);
	Father *getFather();
	char *getName();
	void receive(int m);
	void print();
};