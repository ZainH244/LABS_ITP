#include<iostream>
using namespace std;
int c1(int arr1[3][4],int arr2[3][4]){
    int c[3][4];
       for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            c[i][j]=arr1[i][j]+arr2[i][j];
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
    int a[3][4]={{2,5,7,1},{1,3,6,1},{5,4,1,3}};
    int b[3][4]={{1,9,5,0},{7,1,5,4},{3,4,2,8}};
    c1(a,b);

}