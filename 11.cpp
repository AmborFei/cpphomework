#include <iostream>
using namespace std;
double p(double n,double x)
{
	double s;
	if(n==0)
	{
		s=1;
	}
	else if(n==1)
	{
		s=x;
	}
	else
	{
		s=((2*n-1)*x*p((n-1),x)-(n-1)*p((n-2),x))/n;
	}
	return s;
}
void main()
{
	cout<<"xΪ5��10�����õö���ʽ��ֵΪ��"<<p(10,5)<<endl;
	system("pause");
}