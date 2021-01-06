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
void search(int a[]){
	int low=0,high=9,binary,x;
	cout<<"请输入您要查找的数据："<<endl;
	cin>>x;
	binary=(low+high)/2;
	while(x!=a[binary]&&low<=high){
		if(x<a[binary]){
			high=binary-1;	
		}
		else{
			low=binary+1;
			binary=(low+high)/2;
		}
	}
	if(low<=high){
		cout<<"查找成功！您所查找的数在数组中的下标为："<<binary<<endl;
	}
	else{
		cout<<"没有找到该数据！"<<endl;
	}
}
void main(){
	int a[10]={15,8,0,-6,2,39,-53,12,10,6};
	paixu(a);
	search(a);
	system("pause");
}