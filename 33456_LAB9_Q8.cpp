#include<iostream>
\
using namespace std;
int cube(int n){
    int sum=n*(n+1)/2;
    int c=sum*sum;
    return(c);
}



int main(){
    int i;
    cout<<"Enter the number(1 to 1000) : ";
    cin>>i;
    if(i>1000){
        cout<<"invalid";
    }
    else{
        
    }
    cout<<"cube sum is : "<<cube(i);
}