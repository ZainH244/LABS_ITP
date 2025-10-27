#include<iostream>
using namespace std;
int trans(int arr[4][3]){
    int c[3][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            c[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[4][3]={{9,5,7},{1,3,6},{5,4,1},{0,8,2}};
    trans(a);
}