#include<iostream>
#include<string.h>
using namespace std;
void jobselect(){
    int marks,ex;
    cout<<"enter the marks : ";
    cin>>marks;
    if(marks>=60){
        cout<<"Enter experience : ";
        cin>>ex;
    }
    if(marks>=70 && ex>=2){
        cout<<"Selected as Associate Developer";
    }
    else if(marks>=60 && ex>=1){
        cout<<"Selected as Assitant Developer";
    }
    else if(marks>=50){
        cout<<"selected as trainee engineer";
    }
}

int main(){
    jobselect();
}