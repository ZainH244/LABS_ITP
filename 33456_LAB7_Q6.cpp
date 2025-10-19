// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    string h[]={"ali","zuhair","faisal","maaz","anis"};
    cout<<"1. By selection sort : "<<endl;
    int n=5;
    
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(h[j]<h[min]){
                min=j;
            }
        }
         string temp=h[min];
         h[min]=h[i];
        h[i]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<h[i]<<endl;
    }
    cout<<"2. By insertion sort "<<endl;
    for(int i=1;i<n;i++){
        string key=h[i];
        int j=i-1;
        while(j>=0 && h[j]>key){
            h[j+1]=h[j];
            j--;
        }
        h[j+1]=key;
    }
    for(int i=0;i<5;i++){
        cout<<h[i]<<endl;
    }
}