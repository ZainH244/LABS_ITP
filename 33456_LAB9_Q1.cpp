#include<iostream>
#include<cstring>
using namespace std;
void reverse(char x[],char y[]){
	strcat(x,y);
	for(int i=strlen(x)-1;i>=0;i--){
        cout<<x[i];
    }
}
int main(){
    char a[20]= "ali";
    char b[]= " khan";
  	reverse(a,b);
  
    
    
}