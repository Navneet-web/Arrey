#include<iostream>
using namespace std;
int main(){
	int a;
	int pro=1;
	cout<<"Enter the no :: ";
	cin>>a;
int num [a];
for(int i=0;i<a;i++){
	cin>>num[i];
}
	cout<<"The arrey is :: "<<endl;
	for(int j=0;j<a;j++){
		pro*=num[j];



}
cout<<pro<<endl;	

	
}
