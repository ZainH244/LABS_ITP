#include<iostream>
using namespace std;
bool magicsquare(int matrix[3][3],int n){
    int magicsum=0;

    for(int j=0;j<n;j++)
        magicsum+=matrix[0][j];


    for (int i=1;i<n;i++) {
        int rowsum=0;
        for(int j=0;j<n;j++)
            rowsum+=matrix[i][j];
        if (rowsum!=magicsum)
            return false;
    }

    for (int j=0;j<n;j++) {
        int colsum =0;
        for (int i=0;i<n;i++)
            colsum+=matrix[i][j];
        if (colsum!=magicsum)
            return false;
    }


    int diag1=0;
    for (int i=0;i<n;i++)
        diag1+=matrix[i][i];
    if (diag1!=magicsum)
        return false;


    int diag2 = 0;
    for (int i=0;i<n;i++)
        diag2+=matrix[i][n-i-1];
    if(diag2!=magicsum)
        return false;

    return true;
}
int main(){
    int n;
    cout<<"Enter the size of matrix : ";
    cin>>n;
    int a[3][3];
    cout<<"Enter the elements of matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
      if(magicsquare(a, n))
        cout<<"It is magic square"<<endl;
    else
        cout<<"It is not magic square"<<endl;

    return 0;
}