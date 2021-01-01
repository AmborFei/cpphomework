#include<iostream>
using namespace std;
int main()
{
	double e = 1, a;
	int i, n = 0;
	do
	{
		int b = 1;
		n++;
		for (i = 1; i <= n; i++)
		{
			b = b * i;
		}
		a = 1.0 / b;
		e = e + a;
	} while (a >= 0.00000001);
	cout <<"n="<< n << endl;
	cout << "e=" << e << endl;
	system("pause");
}
