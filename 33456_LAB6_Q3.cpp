#include <iostream>
using namespace std;

int main() {
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    int a[size];

    for(int i=0;i<size;i++) {
        cout<<"Enter the element a["<<i<<"] = ";
        cin>>a[i];
    }
    bool symmetric = true;
    for(int i = 0; i < size / 2; i++) {
        if(a[i] != a[size - i - 1]) {
            symmetric = false;
            break;
        }
    }
    if(symmetric){
        cout<<"array is symmetric";
    } 
    else {
        cout<<"array is not symmetric";
    }

    return 0;
}
