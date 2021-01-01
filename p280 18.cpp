#include<iostream>
#include<fstream>
using namespace std;
class Dog{
public:
	int weight;
	int age;
}
int main(){
Dog dog1;
Dog dog2;
dog1.weight=5;
dog1.age=10;
ofstream outfile("dog1.txt",ios::binary);
ifstream infile("dog1.txt",ios::binary);
outfile.write((char*)&dog1,sizeof(dog1));
outfile.close();
infile.read((char*)&dog2,sizeof(dog2));
infile.close();
cout<<"weight:"<<dog2.weight<<endl;
cout<<"age:"<<dog2.age<<endl;
system ("pause");
}