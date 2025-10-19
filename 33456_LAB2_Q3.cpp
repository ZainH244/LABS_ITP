#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the marks : ";
cin>>a;
if((a>=90)&&(a<100))
cout<<"The Grade is A";
else if((a>=80)&&(a<89))
cout<<"The Grade is B";
else if((a>=70)&&(a<79))
cout<<"The Grade is C";
else if((a>=60)&&(a<69))
cout<<"The Grade is D";
else if(a<60)
cout<<"The Grade is F";
}