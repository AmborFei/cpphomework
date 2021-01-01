#include<iostream>

using namespace std;

void main() {

	int year, month;

	cout << "请输入年份：";

	cin >> year ;

	cout << "请输入月份：";

	cin >> month;

	if (month % 2 == 1 || month == 8)
		cout << year << "年" << month << "月共有31天";
	else if (month % 2 == 0 && month != 2 )
		cout << year << "年" << month << "月共有30天";
	else if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		cout << year << "年" << month  << "月共有29天";
	else
		cout << year  << "年" << month  << "月共有28天";
	system("pause");

}