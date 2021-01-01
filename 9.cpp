#include <iostream>
using namespace std;
void main()
{
	int num[100];
	int point = 0;
	do
	{
		cout << "请输入一组非0整数（以输入0标志结束）：";
		cin >> num[point];
	} while (num[point++]!=0);
	int sum=0, a=0,b=0;
	for (int i = 0; i <point ; i++)
	{
		if (num[i] == 0)
		{
			break;
		}
		sum += num[i];
		num[i] > 0 ? a++ : b++;
	}
	cout << "该组数的平均数为：" << (sum * 1.0) / point << endl;
	cout << "该组数中共有" << a <<"个正数"<< endl;
	cout << "该组数中共有" << b<<"个负数";
	system("pause");
}