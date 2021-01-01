#include <iostream>
using namespace std;
void main() {
	int x, y;
	cout << "请输入两个正整数";
	cin >> x >> y;
	//int min;
	if (x < y)
		min = x;
	else
		min = y;
	do {
		if (x % min == 0 && y % min == 0)
			break;
		min--;
	} while (min > 0);
	int max;
	if (x < y)
		max = y;
	else
		max = x;
	do {
		if (max % x == 0 && max % y == 0)
			break;
		max++;
	} while (max < x * y);
	cout << "两数的最大公约数为" << min << endl;
	cout << "两数的最小公倍数为" << max;
	system("pause");
}