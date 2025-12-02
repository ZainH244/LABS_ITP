#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];
    srand(time(0));

    cout<<"Array elements: ";
    for (int i=0;i<size;i++) {
        arr[i]=rand() % 11; 
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    int c[11] = {0}; 

    for (int i=0;i<size;i++) {
        c[arr[i]]++;
    }

    cout << "Value  Frequency : "<<endl;
    for (int i=0; i<=10;i++) {
        if(c[i]>0){
            cout<<"  "<<i<<" "<<c[i]<<endl;
        }
    }


}
