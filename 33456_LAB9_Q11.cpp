#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void valuesi(vector<int>num,int size){
	int values;
	int sum=0;
	for(int i=0;i<size;i++){
		cin>>values;
		num.push_back(values);
}
	reverse(num.begin(),num.end());
	for(int i:num){
		cout<<i<<" ";
	}
}

int main(){
	int s;
	vector<int> number;
	cout<<"enter the amount of numbers to enter : ";
	cin>>s;
	valuesi(number,s);
}