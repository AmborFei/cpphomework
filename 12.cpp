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
	cout<<"请输入两个整数:\n";
	cin>>a1>>a2;
	cout<<"请输入两个长整型数:\n";
	cin>>b1>>b2;
	cout<<"请输入两个浮点型数:\n";
	cin>>c1>>c2;
	cout<<"请输入两个双精度型数:\n";
	cin>>d1>>d2;
	cout<<a1<<"和"<<a2<<"的和为："<<sum(a1,a2)<<endl;
	cout<<b1<<"和"<<b2<<"的和为："<<sum(b1,b2)<<endl;
	cout<<c1<<"和"<<c2<<"的和为："<<sum(c1,c2)<<endl;
	cout<<d1<<"和"<<d2<<"的和为："<<sum(d1,d2)<<endl;
	system("pause");
}