#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter the x-coordinate";
cin>>x;
cout<<"Enter the y-coordinate";
cin>>y;
if((x>0)&&(y>0))
cout<<"I Quadrant";
if((x<0)&&(y>0))
cout<<"II Quadrant";
if((x<0)&&(y<0))
cout<<"III Quadrant";
if((x>0)&&(y<0))
cout<<"IV Quadrant";
}