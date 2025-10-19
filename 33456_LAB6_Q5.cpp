#include <iostream>
using namespace std;

int main() {
    float pass[10],fail[10];
    int student[10],pc=0, fc=0;

    for (int i=1; i<=10;i++) {
        cout<<"Enter the mark of student " <<i<<" : ";
        cin>>student[i];
        if(student[i]==-1) {
            break;  
        }
    }


    for(int j=0;j<10;j++) {
        if(student[j]>=5 && student[j]<=10) {
            pass[pc] = student[j]; 
            pc++;
        } 
        else if(student[j]>=0 && student[j]<5) {
            fail[fc]=student[j];
            fc++;
        }
    }

    cout<<"\nPass student marks: ";
    for(int k=0;k<pc;k++) {
        cout<<pass[k]<<"\t";
    }

    cout<< "\nFail student marks: ";
    for (int q=0;q<fc;q++) {
        cout<<fail[q]<<"\t";
    }

    float sum1=0,sum2=0,avg1,avg2;

    for(int w=0;w<pc;w++) {
        sum1+=pass[w];
    }

    for(int e=0;e<fc; e++) {
        sum2 += fail[e];
    }

    if(pc>0) {
        avg1 = sum1 / pc;
        cout<<"\nAverage of pass students: "<<avg1<< endl;
    } 
    else{
        cout<<"\nNo pass students to calculate average"<<endl;
    }

    if(fc>0) {
        avg2=sum2/fc;
        cout<<"Average of fail students : "<<avg2<<endl;
    } 
    else{
        cout<<"No fail students to calculate average"<<endl;
    }
    if(pc>0){
    cout<<"\nNumber of pass students: "<<pc<<endl;
    }
    else if(pc==0){
        cout<<"no pass students"<<endl;
    }
    if(fc>0){
    cout<<"\nNumber of pass students: "<<fc<<endl;
    }
    else if(fc==0){
        cout<<"no fail students"<<endl;
    }


    return 0;
}