#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
	int number;
	string name;
	double basicSalary;
protected:
	virtual double pay() {
		return basicSalary;
	}
	abstract void display();
public:
	Employee();
	void input()
	{
		cout << "请输入员工编号、姓名：" << endl;
		cin >> number >> name;
	}

	void print()
	{
		cout << "number:" << number << endl;
		cout << "name:" << name << endl;
		cout << "Salary:" << pay() << endl;
	}
};

Employee::Employee() {
	basicSalary = 2000;
}
class Salesman : public Employee
{
private:
	double sales;
	static double commrate;
protected:
	double pay()
	{
		return Employee::pay() + (sales * commrate);
	}
public:
	Salesman(double s);
};

double Salesman::commrate = 5.0 / 1000;
Salesman::Salesman(double s) : Employee() {
	sales = s;
}
class Salesmanager : public Salesman
{
private:
	double jobSalary;
protected:
	double pay()
	{
		return Salesman::pay() + jobSalary;
	}
public:
	Salesmanager(double s);
};
Salesmanager::Salesmanager(double s) : Salesman(s) {
	jobSalary = 3000;
}
void main()
{
	Employee* e;/*= new Employee();
	e->input();
	e->print();
	delete e;*/

	cout << "please enter sale of employee";
	double s;
	cin >> s;
	e = new Salesman(s);
	e->input();
	e->print();
	delete e;
	cout << "please enter sale of manager ";
	cin >> s;
	e = new Salesmanager(s);
	e->input();
	e->print();
	delete e;
	system("pause");
}