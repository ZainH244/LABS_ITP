#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int max=INT_MIN;
    int min=INT_MAX;

    cout<<"Enter integers : " << endl;
    while(cin>>n) {
        if(n>max)
            max=n;
        if (n<min)
            min=n;
    }

    cout<<"Maximum value: "<<max<<endl;
    cout<<"Minimum value: "<<min<<endl;


}
