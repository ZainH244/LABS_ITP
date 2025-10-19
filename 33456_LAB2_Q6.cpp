#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first Number";
    cin>>a;
    cout<<"Enter the 2nd Number";
    cin>>b;
    cout<<"Enter the 3rd Number";
    cin>>c;
 
if((a>b)&&(a>c))
    cout<<a<<" is largest";
if((b>a)&&(b>c))
    cout<<b<<"is largest";
if((c>b)&&(c>a))
    cout<<c<<" is largest";
    
}