#include<iostream>
\
using namespace std;
double a,h;
void getdata(){
    cout<<"Enter the  Base length : ";
    cin>>a;
    cout<<"Enter the height length : ";
    cin>>h;
}
void volumecalc(){
    double c=(a*a)*(h/3.0);
    cout<<"volume : "<<c;
}

int main(){
    getdata();
    volumecalc();
    
}