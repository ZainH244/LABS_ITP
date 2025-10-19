#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the First number";
cin>>a;
cout<<"Enter the 2nd number";
cin>>b;
int sum=a+b;
int product=a*b;
if(sum%product==0)
cout<<"Divisble";
else
cout<<"not divisble";
}