#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y,z;
cout<<"Enter the x-coordinates : ";
cin>>x;
cout<<"Enter the y-coordinates : ";
cin>>y;
cout<<"Enter the z-coordinates : ";
cin>>z;
int distance=sqrt(x*x+y*y+z*z);
cout<<"the distance from origin is "<<distance;
}