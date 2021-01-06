#include <iostream>
using namespace std;
void paixu(int a[]){
	int temp;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<"\t";
	}
	
}
void main(){
	int a[10]={15,8,0,-6,2,39,-53,12,10,6};
	paixu(a);
	/*for(int i=0;i<10;i++){
		cout<<a[i]<<"\t";
	}*/
	system("pause");
}