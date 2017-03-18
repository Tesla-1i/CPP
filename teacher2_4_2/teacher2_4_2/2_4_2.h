class Rational{
private:
	int m;
	int n;
public:
	Rational(int nn = 1, int mm = 1);
	Rational(Rational &A);
	Rational R_add(Rational &A);
	Rational R_sub(Rational &A);
	void R_mul(Rational &A);
	void R_div(Rational &A, Rational &B);
	void simple();
	void print();
	int getM();
	int getN();
};