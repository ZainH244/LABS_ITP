#include<iostream>
#include<ctime>
using namespace std;
#include<algorithm>
int main(){
srand(time(0));
double num1 = (double) rand()/RAND_MAX;
double num2 = (double) rand()/RAND_MAX;
double num3 = (double) rand()/RAND_MAX;
double avg=num1+num2+num3/3;
cout<<"Average is "<<avg;
cout<<"Minimum is"<<min(num1,min(num2,num3));
cout<<"Maximum is"<<max(num1,max(num2,num3));
}
