#include<iostream>

using namespace std;

void main()
{
	int year, month, day;

	cout << "请输入年："<<endl<<"请输入月";

	cin >> year >> month;

	switch (month)
	{
	case 4:
	case 6:
    case 9:
	case 11:
		day = 30;
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			day = 29;
		else 
			day = 28;
		break;
	default:
		day = 31;
		break;
	}

	cout << year<<"年"<<month<<"月天数为：" << day << "天";
	system("pause");
}

