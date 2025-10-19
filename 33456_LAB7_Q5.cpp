// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int row,col,count=0;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of coloumn :";
    cin>>col;
    if(row!=col){
        cout<<"Please enter valid size for a square matrix";
    }
    else{
    int arr[row][col];
    int arr2[row][col];
    cout<<"Enter Elements of array : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your matrix is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    cout<<" Transpose of Martix is  : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==arr2[i][j]){
                count++;
            }
        }
    }
    if(count++==(row*col)){
        cout<<"Matrix is symmetric";
    }
    else{
        cout<<"matrix is not symmetric";
    }
}
    return 0;
}