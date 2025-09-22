#include <iostream>
using namespace std;

int main() {
    int a,tickets=0,ticsopho=0,ticjuniors=0,tictotal=0,msopho=0,mjuniors=0,discs=0,discj=0,smax=500,seataval=500;
    double msoph=0,tic_amount=0;
    while(a!=3){
        cout<<"MENU \n"<<"1.TICKET\n"<<"2.INFORMATION\n"<<"3.EXIT";
        cin>>a;
        if(a==1){
            cout<<"How many tickets do you want? : ";
            cin>>tickets;
            if(tickets<=500){
            cout<<"How many sophos are there ?";
            cin>>ticsopho;
            cout<<"How many juniors are there?";
            cin>>ticjuniors;
            if(ticsopho+ticjuniors==tickets){
            if(ticsopho>3){
                msopho=ticsopho*100;
                discs=0.20*msopho;
                msopho-=discs;
            }
            else if(ticsopho<=3){
                msopho=ticsopho*100;
            }
            if(ticjuniors>3){
                mjuniors=ticjuniors*50;
                discj=0.20*mjuniors;
                mjuniors-=discj;
            }
            else if(ticjuniors<=3){
                mjuniors=ticjuniors*50;
            }
            cout<<"calculated successfully"<<endl;
            tic_amount=msopho+mjuniors;
            }
            if(ticsopho+ticjuniors!=tickets){
                cout<<"please write valid number of juniors and sopho"<<endl;
            }
        }
            else if(tickets>500){
                cout<<"Sorry not enough seats"<<endl;
            }
            
            
        }
        else if(a==2){
            seataval=smax-tickets;
            cout<<"Number of seats available are "<<seataval<<endl;
            cout<<"Total amount of ticket is "<<tic_amount<<endl;
        }
        else if(a==3){
            cout<<"Exited successfully";
        }
        
    }


    return 0;
}