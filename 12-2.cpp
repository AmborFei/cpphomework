#include<iostream>
#include<string>
using namespace std;
class Complex {
private:
	double real;
	double imag;
public:
	//Complex() {}
	Complex(double rea, double ima) :real(rea), imag(ima) {}
	/*Complex operator+(Complex& c) {
		Complex tempC;
		tempC.real = this->real + c.real;
		tempC.imag = this->imag + c.imag;
		return tempC;
	}*/
	friend const Complex operator+ (Complex& a,Complex& c) /*{
		Complex tempC;
		tempC.real = a->real + c.real;
		tempC.imag = a->imag + c.imag;
		return tempC;*/
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
	void display(string text) {
		if (imag == 0.0) {
			cout << text << real << endl;
		}
		else
		{
			cout << text << "(" << real << ")+(" << imag << ")i" << endl;
		}
	}
};
const Complex operator+(Complex& a, Complex& c) {
	Complex tempC;
	tempC.real = a->real + c.real;
	tempC.imag = a->imag + c.imag;
	return tempC; 
}
	
void main()
{
	Complex c1(1, 2), c2(3, 4), c3;
	c3 = c1 + c2;
	c3.display("两复数的和为：");
	c3 = c1 - c2;
	c3.display("两复数的差为：");
	c3 = c1 * c2;
	c3.display("两复数的积为：");
	system("pause");
}