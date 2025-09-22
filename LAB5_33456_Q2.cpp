
#include <iostream>
using namespace std;
int main() {
    int num;
    int count=0;
    while(true){
        cin>>num;
        while(num>0){
            cout<<"CSE141 exam is in week 9"<<endl;
            num--;
            count++;
        }
        if(num<0){
            cout<<"code ends"<<endl;
            cout<<"total message displayed "<<count;
            break;
        }
    }
}