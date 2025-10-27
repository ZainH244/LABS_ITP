#include<iostream>
using namespace std;
int sumc(int arr[3][3]){
    int j,sum=0;;
    cout<<"Enter the coloumn to produce sum : ";
    cin>>j;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
    cout<<"sum = "<<sum;
}

int main(){
    int ar[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    sumc(ar);


}