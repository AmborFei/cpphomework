#include <iostream>
using namespace std;
class Student{
private:
	float score;
	static int count;
	static float total;
public:
	void account(float score1)
	{
		score=score1;
		++count;
		total=total+score;
	}
	static float sum()
	{
		return total;
	}
	static float average()
	{
		return total/count;
	}

};
int Student::count=0;
float Student::total=0.0;
void main()
{
	Student s1,s2,s3,s4,s5;
	int a1,a2,a3,a4,a5;
	cout<<"������5λѧ��������"<<endl;
	for(int i=1;i<6;i++)
	{
		char namei;
		cin>>namei;
	}
	cout<<"������5λѧ���ɼ���"<<endl;
	cin>>a1>>a2>>a3>>a4>>a5;
	s1.account(a1);
	s2.account(a2);
	s3.account(a3);
	s4.account(a4);
	s5.account(a5);
	cout<<"ѧ�����ܷ�Ϊ��"<<Student::sum()<<endl;
	cout<<"ѧ����ƽ����Ϊ��"<<Student::average()<<endl;
	system("pause");
}