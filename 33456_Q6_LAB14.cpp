#include<iostream>
using namespace std;
struct phone{
	int a;
	int e;
	int n;
};
int main(){
	phone p1={212,767,8900};
	phone p2;
	cout<<"Enter area code : ";
	cin>>p2.a;
	cout<<"Enter exchange : ";
	cin>>p2.e;
	cout<<"Enterh number : ";
	cin>>p2.n;
	cout<<"My number is ("<<p1.a<<")"<<" "<<p1.e<<"-"<<p1.n<<endl;
	cout<<"your number is ("<<p2.a<<")"<<" "<<p2.e<<"-"<<p2.n;
	
}