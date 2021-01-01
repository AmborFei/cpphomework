#include <iostream>
using namespace std;
void main()
{
	int x=1,y=1,z;
	cout<<"Fibonacci数列前20项为："<<endl<<x<<endl<<y<<endl;
	for(int i=3;i<=20;i++)
	{
	z=x+y;
	x=y;
	y=z;
	cout<<z<<endl;
	}
	system ("pause");
}