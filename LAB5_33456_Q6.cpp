#include <iostream>
using namespace std;

int main() {
    int nos=10;
    int course=3;
    double CSE141[nos];
    double CSE141LAB[nos];
    double CSE578[nos];
    double sum1=0,sum2=0,sum3=0;
    double avg1,avg2,avg3,tavg;
    for(int i=0;i<nos;i++){
        cout<<"Enter grades for CSE14 : ";
        cin>>CSE141[i];
    }
    for(int j=0;j<nos;j++){
        cout<<"Enter grades for CSE14LAB : ";
        cin>>CSE141LAB[j];
    }
    for(int k=0;k<nos;k++){
        cout<<"Enter grades for CSE578 : ";
        cin>>CSE578[k];
        
    }
    for(int i=0;i<nos;i++){
        sum1+=CSE141[i];
        sum2+=CSE141LAB[i];
        sum3+=CSE578[i];
    }
    avg1=sum1/nos;
    avg2=sum2/nos;
    avg3=sum3/nos;
    tavg=(sum1+sum2+sum3)/(nos*course);
    cout<<"The average grade of CSE141 is "<<avg1<<endl;
    cout<<"The average grade of CSE141LAB is "<<avg2<<endl;
    cout<<"The average grade if CSE578 is "<<avg3<<endl;
    cout<<"Average grade of all students in all courses is "<<tavg<<endl;
    

    
   

    return 0;
}