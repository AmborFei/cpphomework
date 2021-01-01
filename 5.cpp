#include <iostream>
using namespace std;
void main(){
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=2*(6-i);j++)
			cout<<" ";
		for(j=1;j<=4*i-3;j++)
			cout<<"*";
		cout<<endl;
	}
	system("pause");
}