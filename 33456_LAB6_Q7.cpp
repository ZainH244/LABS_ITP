#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int temp=num,count=0;
    while(temp>0){
        count++;
        temp/=10;
    }
    cout<<"total number of digits is "<<count<<endl;
    while(num>=10){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    num=sum;
}
 cout<<"digital root of a number is "<<num;
}
