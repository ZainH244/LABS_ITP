#include <iostream>
using namespace std;

bool arrayeq(int a[],int b[],int n) {
    if(n==0)
        return true;
    if(a[n-1]!=b[n-1])
        return false;

    return arrayeq(a,b,n-1);
}

int main() {
    int arr1[]={1,2,3,4};
    int arr2[]={1,2,3,4};
    int arr3[]={1,2,3,9};

    cout<<(arrayeq(arr1, arr2,4) ? "Arrays are same" : "Arrays are not same") << endl; 
    cout<<(arrayeq(arr1, arr3,4) ? "Arrays are same" : "Arrays are not same") << endl; 
}
