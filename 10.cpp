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
		cout<<"������ѧ��ѧ�š��������Ա��Ա�ΪŮ����1���Ա�Ϊ������2�������䡢�����ɼ���Ӣ��ɼ���c++�ɼ��������ԭ��ɼ���"<<endl;
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
	cout<<"ѧ��  ����  �Ա�  ����  �����ɼ�  Ӣ��ɼ�  c++�ɼ�  �����ԭ��ɼ�  ƽ����"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<stu[i].num<<"  "<<stu[i].name<<"  "<<stu[i].ch<<"  "<<stu[i].age<<"  "<<stu[i].math<<"  "<<stu[i].eng<<"  "<<stu[i].cpp<<"  "<<stu[i].com<<"  "<<stu[i].aver<<endl;
	}
	system("pause");
}