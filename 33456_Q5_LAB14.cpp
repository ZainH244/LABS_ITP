#include<iostream>

using namespace std;
int check(int a[],int s,int i,int n){
	if(i==s){
		return -1 ;
	}
	if(a[i]==n){
		return i;
	}
	return(check(a,s,i+1,n)); 
	
}
int main(){
	int size=10,num;
	int arr[size]={5, 4, 3, 2, 1, 6, 10, 9, 7, 8};
     cout<<"Enter the number to find ";
	cin>>num;
	int r=check(arr,size,0,num);
	if(r==-1){
		cout<<"Number not found";
		
	}
	else{
		cout<<"number found at "<<r<<" index";
		} 
}
