#include<iostream>
using namespace std;

class CCount
{
public:
	void setValues(double m,double n)
	{
		a = m;
		b = n;
	}
	double plus()
	{
		return (a + b);
	}
	double minus()
	{
		return (a - b);
	}
	double mulpitly()
	{
		return (a * b);
	}
	double division()
	{
		return (a / b);
	}
private:
	double a;
	double b;
	char c;
};
void main()
{
	double x, y;
	cout << "请输入两个浮点数" << endl;
	cin >> x >> y;
	CCount p;
	p.setValues(x, y);
	cout << "两数相加为：" << p.plus() << endl;
	cout << "两数相减为：" << p.minus() << endl;
	cout << "两数相乘为：" << p.mulpitly() << endl;
	cout << "两数相除为：" << p.division() << endl;
	system("pause");
}