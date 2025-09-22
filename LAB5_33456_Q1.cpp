#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the first Number ";
    cin>>n1;
    cout<<"Enter the 2nd number ";
    cin>>n2;
    cout<<"first number is "<<n1<<endl;
    cout<<"2nd number is "<<n2<<endl;
    while(n1!=n2){
        n1=n1>>2;
        n2=n2*n2;
            cout<<"first number is "<<n1<<endl;
    cout<<"2nd number is "<<n2<<endl;
        if(n1==0){
            cout<<"these will be never equal";
            return 0;
        }
        else if(n1==n2){
            cout<<"first number is "<<n1<<endl;
            cout<<"2nd number is "<<n2<<endl;
            break;
        }
    }
}   


