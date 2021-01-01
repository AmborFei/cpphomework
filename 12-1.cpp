#include<iostream>
using namespace std;
class Complex{
private:
	double real;
	double imag;
public:
	Complex(){}
	Complex(double rea,double ima):real(rea),imag(ima)
	{
		real=rea;
		imag=ima;
	}
	Complex operator+(Complex &c){
		Complex tempC;
		tempC.real=this->real+c.real;
		tempC.imag=this->imag+c.imag;
		return tempC;
	}
	Complex operator-(Complex &c){
		Complex tempC;
		tempC.real=this->real-c.real;
		tempC.imag=this->imag-c.imag;
		return tempC;
	}
	Complex operator*(Complex &c){
		Complex tempC;
		tempC.real=(this->real*c.real)-(this->real*c.imag);
		tempC.imag=(this->imag*c.real)+(this->real*c.imag);
		return tempC;
	}
	void displayp(){
		if(imag==0.0){
			cout<<"�������ĺ�Ϊ��"<<real<<endl;
		}
		else
		{
			cout<<"�������ĺ�Ϊ��("<<real<<")+("<<imag<<")i"<<endl;
		}
	}
	void displaym(){
		if(imag==0.0){
			cout<<"�������Ĳ�Ϊ��"<<real<<endl;
		}
		else
		{
			cout<<"�������Ĳ�Ϊ��("<<real<<")+("<<imag<<")i"<<endl;
		}
	}
	void displayc(){
		if(imag==0.0){
			cout<<"�������Ļ�Ϊ��"<<real<<endl;
		}
		else
		{
			cout<<"�������Ļ�Ϊ��("<<real<<")+("<<imag<<")i"<<endl;
		}
	}
};
void main()
{
	Complex c1(1,2),c2(3,4),c3;
	c3=c1+c2;
	c3.displayp();
	c3=c1-c2;
	c3.displaym();
	c3=c1*c2;
	c3.displayc();
	system("pause");
}