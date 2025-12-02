#include<iostream>
using namespace std;
int square(int a){
    int b=a*a;
    return(b);
}
int cube(int a){
    int b=a*a*a;
    return(b);
}

int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int result = square(n) + cube(n);
cout<<"Square = "<<square(n)<<", Cube = "<<cube(n)<<", Sum = "<<result;
}
