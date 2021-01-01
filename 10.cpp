#include<iostream>
using namespace std;
struct student
{
	int num;
	char name[20];
	int sex;
	int age;
	float math,eng,cpp,com;
	float aver;
	char ch;
};
void main()
{
	student stu[5];
	int i=0;
	while(i<5)
	{
		cout<<"请输入学生学号、姓名、性别（性别为女输入1，性别为男输入2）、年龄、高数成绩、英语成绩、c++成绩、计算机原理成绩："<<endl;
		cin>>stu[i].num>>stu[i].name>>stu[i].sex>>stu[i].age>>stu[i].math>>stu[i].eng>>stu[i].cpp>>stu[i].com;
		stu[i].aver=(stu[i].math+stu[i].eng+stu[i].cpp+stu[i].com)/4.0;
		if(stu[i].sex==1)
		{
			stu[i].ch='nv';
		}
		else
		{
			stu[i].ch='nan';
		}
		i++;
	}
	cout<<"学号  姓名  性别  年龄  高数成绩  英语成绩  c++成绩  计算机原理成绩  平均分"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<stu[i].num<<"  "<<stu[i].name<<"  "<<stu[i].ch<<"  "<<stu[i].age<<"  "<<stu[i].math<<"  "<<stu[i].eng<<"  "<<stu[i].cpp<<"  "<<stu[i].com<<"  "<<stu[i].aver<<endl;
	}
	system("pause");
}