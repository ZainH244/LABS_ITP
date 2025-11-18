#include<iostream>
using namespace std;
float* sumAll(float a[],int b){
	float *p=a;
	float static sum=0;
	for(int i=0;i<b;i++){
		sum+=*(p+i);
	}
	return &sum;
}

int main(){
float arr[] = {4.5,3.3,0.5,4.57};
cout<<*sumAll(arr,4);
}