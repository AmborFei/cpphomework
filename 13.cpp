#include<iostream>
using namespace std;
#define N 8 
int max(int a,int b,int c)
{
	int d;
	d=(a>b?a:b)>c?(a>b?a:b):c;
	return(d);
}
void main()
{
	int data[4][N];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<N;j++)
		{
			data[i][j]=i+j;
		}
	}
	for(int j=0;j<N;j++)
	{
		data[3][j]=max(data[0][j],data[1][j],data[2][j]);
	}
	for(int i=0;i<4;i++)
	{
		cout<<endl;
		for(int j=0;j<N;j++)
		{
			cout<<data[i][j];
		}
	}
	system("pause");
}