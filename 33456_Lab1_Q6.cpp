#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a;
int b;
int c;
cout<<"Enter the first Number";
cin>>a;
cout<<"Enter the second Number";
cin>>b;
cout<<"Enter the third Number";
cin>>c;
cout<<"Maximum is"<<max(a,max(b,c));
}