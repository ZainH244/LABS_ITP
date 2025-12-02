#include<iostream>
#include<string>
using namespace std;
bool substring(string s1, string s2, int i=0, int j=0){
    if(i==s1.length()){
        return true;
    }
    if(j==s2.length()){
        return false;
    }
    if(s1[i]==s2[j]){
        return substring(s1,s2,i+1,j+1);
    }
    return substring(s1,s2,i,j+1);

}
int main(){
    string s1="hew",s2="helloworld";
    if(substring(s1,s2)==1){
        cout<<"s1 is substring of s2";
    }
    else{
        cout<<"s1 is not substring";
    }
    ;
    
}