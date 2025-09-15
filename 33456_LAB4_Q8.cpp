#include <iostream>
using namespace std;
int main(){
    int types,B,F,P,S,qb,qf,qp,qs,total=0;
    char choice;
    cout<<"Enter the number of food types out of 4 : ";
    cin>>types;
    for(int i=0;i<types;i++){
        cout<<"Enter choice (B/F/P/S) : ";
        cin>>choice;
        if(choice=='B'||choice=='b'){
            cout<<"Enter Quantity : ";
            cin>>qb;
            B=qb*200;
            cout<<"B x "<<qb<<"="<<B<<endl;
            total+=B;
        }
        else if(choice=='F'||choice=='f'){
            cout<<"Enter quantity : ";
            cin>>qf;
            F=qf*50;
            cout<<"F x "<<qf<<"="<<F<<endl;
            total+=F;
        }
        else if(choice=='P'||choice=='p'){
            cout<<"Enter quantity : ";
            cin>>qp;
            P=qp*500;
            cout<<"P x "<<qp<<"="<<P<<endl;
            total+=P;
    }
        else if(choice=='S'||choice=='s'){
            cout<<"Enter quantity : ";
            cin>>qs;
            S=qs*150;
            cout<<"S x "<<qs<<"="<<S<<endl;
            total+=S;
        }    
        
        }
        cout<<"the total cost is : "<<total;
}
    
    


