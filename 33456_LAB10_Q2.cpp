#include <iostream>
#include <string>
using namespace std;


bool palindrome(string s,int start,int end) {
    if(start>=end){
        return true;
}
    if(s[start]!=s[end]){
        return false;
    }
   
    return palindrome(s,start+1,end - 1);
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    if(palindrome(str,0,str.length()-1))
        cout <<"it is a palindrome"<<endl;
    else
        cout <<"not a palindrome"<<endl;

    return 0;
}
