#include<iostream>
#include<string.h>
using namespace std;
void comparestrings(string a,string b){
    if(a>b){
        cout<<a<<" is greater";
    }
    else if(b>a){
        cout<<b<<" is greater";
    }
    else{
        cout<<"strings are equal";
    }
}
int main(){
string s1, s2;
cout<<"Enter first string: ";
cin>>s1;
cout<<"Enter second string: ";
cin>>s2;
comparestrings(s1,s2);
}