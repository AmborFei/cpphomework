#include<iostream>
using namespace std;
void main(){
	int a,b;
	cout<<"输入一个正整数：";
	cin>>a;
    if(a%3==0&&a%5==0&&a%7==0)
		cout<<"该数能被3、5、7整除"<<endl;
	else
		cout<<"该数不能被3、5、7整除"<<endl;
	system("pause");
	}

