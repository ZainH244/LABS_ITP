#include <iostream>
using namespace std;
int main() {
int n, count=0;
cout<<"Enter an integer to check for divisibility by 7: ";
cin>>n;
if(n<0) n=-n;
while(n!=0 && n!=7 && n!=-7 && count<50) {
int last=n%10;
int rest=n/10;
n=rest-(2*last);
cout<<n<<" ";
count++;
}
cout<<endl;
if(n==0 || n==7 || n==-7)
cout<<"The number is divisible by 7"<<endl;
else
cout<<"The number is not divisible by 7"<<endl;
}

