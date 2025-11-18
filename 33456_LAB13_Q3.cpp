#include<iostream>
using namespace std;
float* findMax(float a[],int b){
	float *p=a;
	float *max1=&a[0];
	float *max2=&a[0];
	for(int i=0;i<b;i++){
		if(*(p+i)>*max1){
			 max1=p+i;
		}
	}
	bool found=false;
    for (int i=0;i<b;i++) {
        if(*(p+i)<*max1) {     
            if(!found||*(p+i)>*max2) {
                max2=p+i;
                found=true;
            }
        }
    }

    return max2;   
	}
	

int main(){
float arr[] = {4.5, 3.3, 0.5, 4.57};
float *result = findMax(arr, 4);
cout << "Second highest = " << *result;
}