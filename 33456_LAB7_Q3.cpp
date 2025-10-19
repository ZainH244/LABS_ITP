#include <iostream>
using namespace std;
int main() {
    int row,col,max;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of coloumn : ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter elements of Matrix :";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your Matrix is : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    max=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
            max=arr[i][j];
        }
    }
    
}
cout<<"maximum is : "<<max;
}