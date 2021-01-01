#include <iostream>
using namespace std;
void main()
{
	int num[20] = {1,1};
	for (int i = 0; i < 18; i++)
	{
		num[i + 2] = num[i] + num[i + 1];
	}
	cout << "Fibonacci数列前20项为:\n";
	for (int i = 0; i < 20; i++)
	{
		cout << num[i]<<endl;
	}
	system("pause");
}