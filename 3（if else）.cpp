#include<iostream>

using namespace std;

void main() {

	int year, month;

	cout << "��������ݣ�";

	cin >> year ;

	cout << "�������·ݣ�";

	cin >> month;

	if (month % 2 == 1 || month == 8)
		cout << year << "��" << month << "�¹���31��";
	else if (month % 2 == 0 && month != 2 )
		cout << year << "��" << month << "�¹���30��";
	else if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		cout << year << "��" << month  << "�¹���29��";
	else
		cout << year  << "��" << month  << "�¹���28��";
	system("pause");

}