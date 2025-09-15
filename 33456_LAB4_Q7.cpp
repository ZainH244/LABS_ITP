#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"Write the Richter scale number ";
    cin>>n;
    if(n<5.0)
    cout<<"Little or no damage";
    else if((n>=5.0)&&(n<5.5))
    cout<<"Some damage";
    else if((n>=5.5)&&(n<6.5))
    cout<<"Serious damage: walls may crack";
    else if((n>=6.5)&&(n<7.5))
    cout<<"Disaster: House and Buildings may collapse";
    else if(n>=7.5)
    cout<<" Catastrophe: most building destroyed";
}