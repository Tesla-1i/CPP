/*class Rational{
  public:
    Rational(int nn=1,int mm=1);	//构造
	Rational  R_add(Rational & A);	//加
    Rational  R_sub(Rational & A);	//减
    void R_mul(Rational & A);		//乘
    void R_div(Rational & A, Rational &B);	//除
	void simple( );		//约分
	void print();		//以分数形式显示，注意约分
  private:
    int m;   // 分母
	int n;   // 分子
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