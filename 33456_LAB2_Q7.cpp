#include<iostream>
using namespace std;
int main(){
double s1,s2,s3,s4,s5;
cout<<"Enter marks of 1st subject ";
cin>>s1;
cout<<"Enter marks of 2nd subject ";
cin>>s2;
cout<<"Enter marks of 3rd subject ";
cin>>s3;
cout<<"Enter marks of 4th subject ";
cin>>s4;
cout<<"Enter marks of 5th subject ";
cin>>s5;
double avg=(s1 + s2 + s3 + s4 + s5) / 5.0;
if(avg>=90)
cout<<"Grade is A";
else if((avg>=80)&&(avg<89))
cout<<"Grade is B";
else if((avg>=70)&&(avg<79))
cout<<"Grade is B";
else
cout<<"FAIL";

}