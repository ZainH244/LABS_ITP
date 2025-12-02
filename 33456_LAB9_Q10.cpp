#include<iostream>
#include<vector>
using namespace std;
void valuesi(vector<int>num,int size){
	int values;
	int sum=0;
	cout<<"Enter the values : ";
	for(int i=0;i<size;i++){
		cin>>values;
		num.push_back(values);
		sum+=values;
}
	cout<<"sum is "<<sum;
}
	
	
	

int main(){
	int s;
	vector<int> number;
	cout<<"enter the amount of number to enter : ";
	cin>>s;
	valuesi(number,s);
}