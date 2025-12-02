#include<iostream>
#include<string>
using namespace std;
bool pal(string a,int left,int right){
	if(left>=right){
		return true;
	}
	if(a[left]!=a[right]){
		return false;
	}
	return pal(a,left+1,right-1);
}
int main(){
	string a;
	cout<<"Enter the word :";
	cin>>a;
	if(pal(a,0,a.length()-1)){
		cout<<"is a plalindrome ";
	}
	else{
		cout<<"not a palindrome";
	}
}