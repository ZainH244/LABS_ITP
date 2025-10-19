#include <iostream>
using namespace std;
int main() {
   int y;
   cout<<"Integer root for the problem is ";
   for(int a=-10;a<=10;a++){
       for(int b=-10;b<=10;b++){
           for(int c=-10;c<=10;c++){
                    y=(3*a)+(7*b)-(5*c);
                    if(y==10){
                        cout<<"solution:   a="<<a<<", b="<<b<<", c="<<c<<endl;
                    }
                }
           }
       }
  }

