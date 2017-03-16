/*class Rational{
  public:
    Rational(int nn=1,int mm=1);	//����
	Rational  R_add(Rational & A);	//��
    Rational  R_sub(Rational & A);	//��
    void R_mul(Rational & A);		//��
    void R_div(Rational & A, Rational &B);	//��
	void simple( );		//Լ��
	void print();		//�Է�����ʽ��ʾ��ע��Լ��
  private:
    int m;   // ��ĸ
	int n;   // ����
};*/

class Rational{
private:
  int m;
  int n;
public:
  Rational(int nn = 1, int mm = 1);
  Rational R_add(Rational &A);
  Rational R_sub(Rational &A);
  void R_mul(Rational &A);
  void R_div(Rational &A, Rational &B);
  void simple();
  void print();
  int getM();
  int getN();
};