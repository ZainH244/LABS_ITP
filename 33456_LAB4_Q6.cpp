
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    char type,b,size;
    double tob=20+20+25+15+25,pob,tow=15+15+20+2+4+20,powc;
    cout<<"Choose Type of Coffe Black or White b/w : ";
    cin>>type;
    cout<<"The coffe is manual or not y/n : ";
    cin>>b;

    if(b=='n'||b=='N'){
        cout<<"coffe is double or not y/n : ";
        cin>>size;
        if(type=='b'||type=='B'){
            cout<<"operation "<<setw(15)<<"black coffe(time) "<<endl;
            cout<<"Put Water "<<setw(10)<<"20"<<endl;
            cout<<"Sugar "<<setw(10)<<"20"<<endl;
            cout<<"Mix well  "<<setw(10)<<"25"<<endl;
            cout<<"Add coffee "<<setw(10)<<"15"<<endl;
            cout<<"Add milk  "<<setw(10)<<"-"<<endl;
            cout<<"mix well "<<setw(10)<<"25"<<endl;
            if(size=='y'||size=='Y'){
                pob=0.50*tob;
                tob=tob+pob;
                cout<<"total time is "<<setw(10)<<tob<<endl;
            }
            else if(size=='n'||size=='N'){
                cout<<"total time is "<<setw(10)<<tob<<endl;
            }
        }
        else if(type=='w'||type=='W'){
            cout<<"operation "<<setw(15)<<"white coffe(time) "<<endl;
            cout<<"Put Water "<<setw(10)<<"15"<<endl;
            cout<<"Sugar "<<setw(10)<<"15"<<endl;
            cout<<"Mix well  "<<setw(10)<<"20"<<endl;
            cout<<"Add coffee "<<setw(10)<<"2"<<endl;
            cout<<"Add milk  "<<setw(10)<<"4"<<endl;
            cout<<"mix well "<<setw(10)<<"20"<<endl;
            if(size=='y'||size=='Y'){
                powc=0.50*tow;
                tow=tow+powc;
                cout<<"total time is "<<setw(10)<<tow<<endl;
            }
            else if(size=='n'||size=='N'){
                cout<<"total time is "<<setw(10)<<tow<<endl;
            
        }
    
        
    }
    
    
}
else if(b=='y'||b=='Y'){
    cout<<"enjoy making your coffee";
}

}