#include <iostream>
#include <string>
using namespace std;
void main()
{
	int num;
	cout << "������һ����������";
	cin >> num;
	int temp = num;
	int count = 0;
	int t[100];
	while (temp)
	{
		t[count] = temp % 10;
		temp /= 10;
		count++;
	}
	cout << "�������������Ϊ��";
	for (int i = 0; i < count; i++)
	{
		cout << t[i];
	}
	system("pause");
}