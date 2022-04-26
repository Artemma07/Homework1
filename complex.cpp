#include "Complex.h"

Complex Complex::sum(Complex n2)
{
	double rel = this->re + n2.re;
	double img = this->im + n2.im;
	return { rel,img };
}
Complex Complex::minus(Complex n2)
{
	double rel = this->re - n2.re;
	double img = this->im - n2.im;
	return { rel,img };
}
Complex Complex::multi(Complex n2)
{
	double rel = this->re * n2.re - this->im * n2.im;
	double img = this->re * n2.im + this->im * n2.re;
	return { rel,img };
}
Complex Complex::div(Complex n2)
{
	double rel = (this->re * n2.re + this->im * n2.im) / (n2.re * n2.re + n2.im * n2.im);
	double img = (this->im * n2.re - this->re * n2.im) / (n2.re * n2.re + n2.im * n2.im);
	return { rel,img };
}
double Complex::leng()
{
	return sqrt(this->re * this->re + this->im * this->im);
}
void Complex::WriteConsole()
{
	cout << this->re << ((this->im < 0) ? "" : "+") << this->im << "i" << endl;
}