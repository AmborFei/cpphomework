#include<iostream>
#include<stdlib.h>
using namespace std;
void main()
{
	int n=10;
	float *p;
	if((p=new float[n])==0)
	{
		cout<<"分配内存失败\n";
		exit(1);
	}
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		p[i-1]=i*(1.0/10);
		sum+=p[i-1];
		cout<<"sum="<<sum<<endl;
	}
	cout<<"输出数组："<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
delete []p;
system("pause");
}