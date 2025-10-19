#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int* arr=new int[size];
    int sum=0,count=0;
    cout<<"Enter the numbers : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        if(arr[i]>0){
            sum+=arr[i];
            count++;
        }
    }
    double avg=(double)sum/count;
    cout<<"sum is : "<<sum<<endl;
    cout<<"Average is : "<<avg<<endl;
    return 0;
}