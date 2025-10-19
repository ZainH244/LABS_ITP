#include <iostream>
using namespace std;

int main() {
    double arr[6];
    double start = 3.14;

    for(int i=0;i<5;i++) {
        arr[i]=start+i*0.10;
    }
    arr[5]=0.0;  

    cout<<"Original numbers:"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    for(int i=0;i<6;i++){
        for (int j=0;j<6-i-1;j++) {
            if (arr[j]<arr[j+1]) {
                double temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Numbers in descending order:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
