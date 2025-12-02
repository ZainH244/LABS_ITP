#include <iostream>
#include <algorithm>
using namespace std;


int kad(int arr[],int i,int &currentmax,int &globalmax) {
    if (i == 0) {
        currentmax=arr[0];
        globalmax=arr[0];
        return arr[0];
    }
    kad(arr,i - 1,currentmax,globalmax);
    currentmax=max(arr[i],currentmax+arr[i]);
    globalmax=max(globalmax,currentmax);

    return globalmax;
}

int maxsuba(int arr[],int n) {
    int currentmax=0,globalmax=0;
    return kad(arr,n - 1,currentmax,globalmax);
}

int main() {
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<< "Maximum subarray sum = "<<maxsuba(arr,n)<<endl;
}
