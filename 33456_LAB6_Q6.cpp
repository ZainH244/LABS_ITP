#include <iostream>
using namespace std;

int main() {
    int arr1[5];
    int arr2[5],count;
    cout<<"ARRAY 1"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter the number marks : ";
        cin>>arr1[i];
    }
    cout<<"ARRAY 2"<<endl;
    for(int k=0;k<5;k++){
        cout<<"enter the number marks : ";
        cin>>arr2[k];
    }
    cout<<"common numbers are : ";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
             if(arr1[i]==arr2[j]){
               cout<<arr1[i]<<endl;
               break;
        }

        }
    }

}
