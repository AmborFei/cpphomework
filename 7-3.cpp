#include <iostream>
using namespace std;
const int COUNT = 20;
void main()
{
	char* p = new char[COUNT];
	char* q = new char[COUNT];
	cout << "请输入两个字符串：" << endl;
	cin >> p >> q;
	int lengthp = 0, lengthq = 0;
	for (int i = 0; i < 20; i++)
	{
		if (p[i] == '\0')
		{
			lengthp = i;
		}
		else
		{
			continue;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (q[i] == '\0')
		{
			lengthq = i;
		}
		else
		{
			continue;
		}
	}
	if (lengthp > lengthq)
	{
		cout << "第一个字符串较大" << endl;
	}
	else if (lengthp < lengthq)
	{
		cout << "第二个字符串较大" << endl;
	}
	else
	{
		int same = 0;
		for (int i = 0; i < 20; i++)
		{
			if (p[i] > q[i])
			{
				cout << "第一个字符串较大" << endl;
				same = 1;
				break;
			}
			else if (p[i] < q[i])
			{
				cout << "第二个字符串较大" << endl;
				same = 2;
				break;
			}
			else
			{
				continue;
			}
		}
		if (same == 0)
		{
			cout << "两个字符串一样大" << endl;
		}
	}
	system("pause");
}
