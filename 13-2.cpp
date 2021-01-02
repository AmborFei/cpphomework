#include<iostream>
using namespace std;
class Complex {
private:
	double real;
	double imag;
public:
	Complex() :real(0), imag(0) {}
	Complex(double rea, double ima) :real(rea), imag(ima)
	{
	}
	Complex operator+(Complex& c) {
		Complex tempC;
		tempC.real = this->real + c.real;
		tempC.imag = this->imag + c.imag;
		return tempC;
	}
	Complex operator-(Complex& c) {
		Complex tempC;
		tempC.real = this->real - c.real;
		tempC.imag = this->imag - c.imag;
		return tempC;
	}
	Complex operator*(Complex& c) {
		Complex tempC;
		tempC.real = (this->real * c.real) - (this->real * c.imag);
		tempC.imag = (this->imag * c.real) + (this->real * c.imag);
		return tempC;
	}
	friend ostream& operator<<(ostream& out, Complex& a) {
		if (a.imag == 0.0) {
			out  << a.real << endl;
		}
		else
		{
			out << "(" << a.real << ")+(" << a.imag << ")i" << endl;
		}
		return out;
	}
	friend istream& operator>>(istream& in, Complex& b) {
		in >> b.real >> b.imag;
		return in;
	}
};
void main()
{
	Complex a,b;
	cout << "please enter the information for a\n";
	cin >> a;
	cout << "please enter the information for b\n";
	cin >> b;
	Complex c;
	c = a + b;
	cout << "两复数的和为：" << c;
	Complex d;
	d = a - b;
	cout << "两复数的差为：" << d;
	Complex e;
	e = a * b;
	cout << "两复数的积为：" << e;
	system("pause");
}