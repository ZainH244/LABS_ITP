#include<iostream>
using namespace std;
void display(int a,char d){
	for(int i=0;i<a;i++){
		cout<<d;
	}
}
int main(){
	int num;
	char b;
	cout<<"enter number : ";
	cin>>num;
	cout<<"enter the charcter : ";
	cin>>b;
	display(num,b);

}