class Son;		//�ڶ���һ����ʱ�������Ҫ��һ���࣬һ��Ҫ��ǰ����
class Father{
private:
	char name[16];
	int  money;		//money ����д�����³���bug !!!!!!!!!!!!!!!!!!!!!
	int pay(int m);		//����֧������
public:
	Father(char *n, int m);
	char * getName();
	void receive(int m);
	void print();
	int manage(Son *role, int m);
};