#include <iostream>
using namespace std;
int main() {
    int row,col,max;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of coloumn : ";
    cin>>col;
    int arr[row][col];
    int count;
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

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                count++;
            }
        
        }
}
if(count>=((row*col)/2)){
                cout<<"Matrix is sparse ";
            }
            else{
                cout<<"matrix is not sparse ";
            }

}
