#include<iostream>
using namespace std;
int fact(int n){
	if(n<1){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int a,c;
	cout<<"Enter the number:";
	cin>>a;
	cout<<"Factorial of "<<a<<" is "<<fact(a);
}