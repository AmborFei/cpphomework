#include <iostream>
using namespace std;
int sum(int x,int y)
{return (x+y);}
long int sum(long int a,long int b)
{return (a+b);}
float sum(float m,float n)
{return (m+n);}
double sum(double p,double q)
{return (p+q);}
void main()
{
	int a1,a2;
	long int b1,b2;
	float c1,c2;
	double d1,d2;
	cout<<"��������������:\n";
	cin>>a1>>a2;
	cout<<"������������������:\n";
	cin>>b1>>b2;
	cout<<"������������������:\n";
	cin>>c1>>c2;
	cout<<"����������˫��������:\n";
	cin>>d1>>d2;
	cout<<a1<<"��"<<a2<<"�ĺ�Ϊ��"<<sum(a1,a2)<<endl;
	cout<<b1<<"��"<<b2<<"�ĺ�Ϊ��"<<sum(b1,b2)<<endl;
	cout<<c1<<"��"<<c2<<"�ĺ�Ϊ��"<<sum(c1,c2)<<endl;
	cout<<d1<<"��"<<d2<<"�ĺ�Ϊ��"<<sum(d1,d2)<<endl;
	system("pause");
}