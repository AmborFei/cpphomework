#include <iostream>
using namespace std;
void main()
{
	int num[100];
	int point = 0;
	do
	{
		cout << "������һ���0������������0��־��������";
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
	cout << "��������ƽ����Ϊ��" << (sum * 1.0) / point << endl;
	cout << "�������й���" << a <<"������"<< endl;
	cout << "�������й���" << b<<"������";
	system("pause");
}