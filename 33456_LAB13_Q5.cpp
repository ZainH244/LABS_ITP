#include <iostream>
using namespace std;

void SortFunction(int *arr, int *size, int order) {

    for (int i = 0;i<*size-1;i++) {
        for (int j=0;j<*size-i-1;j++) {

            if (order==1 && arr[j]>arr[j + 1]) {
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j + 1]=temp;
            }
            else if(order==2 && arr[j]<arr[j + 1]) {
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j + 1]=temp;
            }

        }
    }
}

int main() {

    int arr[]={4, 1, 9, 2, 6};
    int size=5;
    int o;

    cout<<"Enter order 1=ascending, 2=descending: ";
    cin>>o;
    SortFunction(arr,&size,o);
    cout<<"Sorted Array: ";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }


}
