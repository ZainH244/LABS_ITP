#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int d=0,n=0;
	cout<<"Enter the number of dice : ";
	cin>>d;
	cout<<"Enter the number of times to roll the dice : ";
	cin>>n;
	if((n>=0) && ((0<=d)&&(d<=100))){
		srand(time(0));
		int ms=d;
		int mx=6*d;
		int count[601]={0};
		for(int i=0;i<n;i++){
			int sum=0;
			for(int j=0;j<d;j++){
				sum+=rand()%6+1;;
			}
			count[sum]++;
		}
		for(int i=ms;i<mx;i++){
			cout<<setw(3)<<i<<" : ";
			for(int j=0;j<count[i];j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"invalid";
	}
}