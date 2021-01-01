#include<iostream>
using namespace std;
void main() {
	int a=4,b=6,c=8,d=9;
	int f;
	f=(a++,b>a++&&c>d)?++d:a<b;
    cout<<"f="<<f<<endl;
	system("pause");
}