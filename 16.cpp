
#include <iostream>
using namespace std;
const int COUNT = 8;
void outUnit(int site,int count,int point) {
	int allLength = 0;
	if (point == -1) {
		allLength = count;
	}
	else {
		allLength = count - (count - point);
	}

	switch (allLength - site) {
	case -2:
		cout << "分";
		break;
	case -1:
		cout << "角";
		break;
	case 0:
		break;
	case 1:
		cout << "元";
		break;
	case 2:
		cout << "十";
		break;
	case 3:
		cout << "百";
		break;
	case 4:
		cout << "千";
		break;
	case 5:
		cout << "万";
		break;
	}
}
void main()
{
	char* p = new char[COUNT];
	string CP[] =  {"零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖"};
	int dotPoint = -1, length = 0;
	cout << "请输入金额[0.00 - 99999.99]" << endl;
	cin >> p;
	for (int i = 0; i < COUNT; i++)
	{
		if (p[i] == '.') {
			dotPoint = i;
		}
		else if (p[i] == '\0')
		{
			length = i;
			break;
		}
	}
	int zeroFlag = 0;
	for (int i = 0; i < length; i++) {
		if (p[i] == '0') {
			zeroFlag = 1;
		}
		else if (p[i] == '.') {
			continue;
		}else {
			if (zeroFlag == 1) {
				cout << CP[0];
				zeroFlag = 0;
			}
			char c = p[i];
			int d = (int)c - 48;
			cout << CP[d];
			//todo unit
			outUnit(i,length,dotPoint);
		}
	}
	cout << endl;
	system("pause");
}