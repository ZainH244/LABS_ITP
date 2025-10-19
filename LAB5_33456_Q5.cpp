#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num3,pass=0,fail=0;
    srand(time(0));
    while(num3!=-1){
    

    int num1=1+rand()%10; 
    int num2=1+rand()%10;

    int correct=num1*num2;
    if(num1<num2){
        cout<<num1<<"x"<<num2<<"=";
        cin>>num3;
        if(num3==correct){
            cout<<"correct"<<endl;
            pass++;
        }
        else if(num3!=correct){
            cout<<"not correct"<<endl;
            fail++;
        }
    }
    else if(num1>num2)
    {
       cout<<num2<<"x"<<num1<<"=";
        cin>>num3;
        if(num3==correct){
            cout<<"correct"<<endl;
            pass++;
        }
        else if(num3!=correct){
            cout<<"not correct"<<endl;
            fail++;
        }
       
    }
    
}
cout<<"Correct : "<<pass<<endl;
cout<<"incorrect : "<<fail<<endl;
    return 0;
}
