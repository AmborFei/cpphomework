#include<iostream>
using namespace std;
class Point{
private:
	int X;
	int Y;
public:
	Point(){
	X=0;
	Y=0;
	}
	Point(int x,int y):X(x),Y(y){}
	Point operator++(){
	X=++X;
	Y=++Y;
	return *this;
	}
	Point operator++(int){
	Point temp(*this);
	X=X++;
	Y=Y++;
	return temp;
	}
	Point operator--(){
	X=--X;
	Y=--Y;
	return *this;
	}
	Point operator--(int){
	Point temp(*this);
	X=X--;
	Y=Y--;
	return temp;
	}
	void display(){
	cout<<"横坐标为："<<X<<endl;
	cout<<"纵坐标为："<<Y<<endl;
	}
};
void main(){
Point point1(23,32),point2,point3;
cout<<"point1: ";
point1.display();
++point1;
cout<<"++point1: ";
point1.display();
point2=point1++;
cout<<"point1++: ";
point1.display();
cout<<"point2: ";
point2.display();
--point1;
cout<<"--point1: ";
point1.display();
point3=point1--;
cout<<"point1--: ";
point1.display();
cout<<"point3: ";
point3.display();
system("pause");
}