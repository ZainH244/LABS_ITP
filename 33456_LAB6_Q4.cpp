#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    double arr[6];

    for (int i = 0; i < 6; ++i) {
        arr[i]=(rand())/double(RAND_MAX);
    }
    
    for (int i=0;i<6;++i) {
        cout<<"Array elements are "<<arr[i]<<endl;
    }
    double sum=0,avg;
    for(int k=0;k<6;k++){
        sum+=arr[k];
    }
    avg=sum/6;
    cout<<"sum is "<<sum<<endl;
    cout<<"average is "<<avg;

    return 0;
}
