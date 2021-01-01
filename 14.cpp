#include <iostream>
using namespace std;
void max(int* p, int length)
{
	int a = p[0], b=0;
	for (int i = 1; i < length; i++)
	{
		if (p[i] > a)
		{
			a = p[i];
			b = i;
		}
	}
	cout << "最大值为：" << a << endl;
	cout << "最大值的下标为：" << b+1 << endl;
}
void main()
{
int n;
cout << "请输入数组长度和数组内容" << endl;
cin >> n;
int* p;
p = new int[n];
for (int i = 0; i < n; i++)
{
	cout << "请输入第"<<(i+1)<<"个数" << endl;
	cin >> p[i];
}
max(p,n);
system("pause");
}