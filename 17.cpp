#include<iostream>
using namespace std;
class Rectangle
{
private:
	int width,length;
public:
	void resize(int w,int l)
	{
		width=w;
		length=l;
	}
	int C()
	{
		return ((width+length)*2);
	}
	int S()
	{
		return (width*length);
	}
};
void main(){
	Rectangle r;
	r.resize(12,13);
	cout<<"周长："<<r.C()<<endl;
	cout<<"面积："<<r.S()<<endl;
	r.resize(15,16);
	cout<<"周长："<<r.C()<<endl;
	cout<<"面积："<<r.S()<<endl;
	system ("pause");
}