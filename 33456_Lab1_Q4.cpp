#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a;
int b;
int c;
cout<<"Enter the 1st Number";
cin>>a;
cout<<"Enter the 2nd Number";
cin>>b;
cout<<"Enter the 3rd Number";
cin>>c;
int maximum=max(a,max(b,c));
int minimum=min(a,min(b,c));
int middle=(a+b+c)-(maximum+minimum);
cout<<minimum<<","<<middle<<","<<maximum;
}
