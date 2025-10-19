#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter a NINE Digit number";
cin>>a;
int d1 = (a / 1000000000)%10;
int d2 = (a / 100000000) % 10;
int d3 = (a / 10000000) % 10;
int d4 = (a / 1000000) % 10;
int d5 = (a / 100000) % 10;
int d6 = (a / 10000) % 10;
int d7 = (a / 1000) % 10;
int d8 = (a / 100) % 10;
int d9 = a % 10;
int checksum=(d1*1+d2*2+d3*3+d4*4+d5*5+d6*6+d7*7+d8*8+d9*9)%11;
cout<<d1<<d2<<d3<<d4<<d5<<d6<<d7<<d8<<d9<<checksum;
}
