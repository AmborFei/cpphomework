
#include <iostream>
using namespace std;

class Mammal
{
public:
	virtual void speak() = NULL;
};
class Dog :public Mammal
{
public:
	void speak()
	{
		cout << "dog wangwang\n";
	}
};
class Cat :public Mammal
{
public:
	void speak()
	{
		cout << "cat miaomiao\n";
	}
};
void main()
{
	Mammal* dog = new Dog();
	dog->speak();
	delete dog;
	Mammal* cat = new Cat();
	cat->speak();
	delete cat;
	system("pause");
}

