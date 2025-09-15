#include<iostream>
using namespace std;
int main(){
    double calories=0,fat,cff,poc;
    cout<<"Enter the amount of fat grams  ";
    cin>>fat;
    cout<<"Enter the amount of calories ";
    cin>>calories;
    if((fat<0)||(calories<0))
        cout<<"the calories or fat grams were incorrectly entered";
    else{
        cff=fat*9;     
        if(cff>calories)
            cout<<"the calories or fat grams were incorrectly entered";
            else{
            poc=cff/calories*100;
    
             if(poc<30)
                cout<<"the food is low on fat";
            else{
                cout<<"The food is not low on fat";
            }
        }
}
}
   