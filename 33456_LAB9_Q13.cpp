#include<iostream>
using namespace std;
int modify(int &x){
	x+=10;
	return(x);
	
}

int main(){
	int a;
	cout<<"Enter marks : ";
	cin>>a;
	modify(a);
	cout<<"Updated marks : "<<a;

}