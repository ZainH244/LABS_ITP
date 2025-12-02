#include<iostream>
\
using namespace std;
double power(double base,int p){
    double res=1;
    for(int i=0;i<p;i++){
        res=res*base;
    }
    return(res);

}




int main(){
  double g;
  int l;
  cout<<"enter the base : ";
  cin>>g;
  cout<<"enter he power : ";
  cin>>l;
  cout<<"solution is : "<<power(g,l);
  
}