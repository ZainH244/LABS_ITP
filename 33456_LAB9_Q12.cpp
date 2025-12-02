#include<iostream>
using namespace std;
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int c,d;
	cout<<"Enter two numbers : ";
	cin>>c>>d;
	cout<<"Before swap : a="<<c<<" ,"<<"b="<<d<<endl;
	swap(&c,&d);
	cout<<"After swap : a="<<c<<" ,"<<"b="<<d<<endl;
}