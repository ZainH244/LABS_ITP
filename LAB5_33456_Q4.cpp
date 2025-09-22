#include <iostream>
using namespace std;

int main() {
    int a,countp=0,countn=0,count3=0;
   
    do{
        cout<<"Enter a number :";
        cin>>a;
         if((a%2==1||a==1)||(a%2==-1)){
            cout<<"The Square of Number is "<<a*a<<endl;
        }
        
        if(a>0){
            countp++;
        }
        else if(a<0){
            countn++;
        }
        if(a>=100&&a<=200){
            count3++;
        }
        
      
        
    }
    while(!(a>=15&&a<=25));
    cout<<"Positive Numbers are "<<countp<<endl;
    cout<<"negative number are "<<countn<<endl;
    cout<<"Number between 100-200 : "<<count3<<endl;
}
