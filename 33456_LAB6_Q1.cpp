
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<"enter the elements of array ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int check,count=0;
    cout<<"enter the number to check if its in array or not : ";
    cin>>check;
    for(int i=0;i<10;i++){
        if(check==arr[i]){
            count++;
        }
}
if(count>0){
    cout<<"number is in array and its "<<count<<" times ";
}
else if(count==0){
    cout<<"Number is not in array ";
}

}