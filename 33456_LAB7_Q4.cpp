#include <iostream>
using namespace std;

int main() {
    int s1m[]={60, 75, 85, 95, 49};
    int s2m[]={59, 70, 65, 45, 39};
    int n=5;

    double sum1=0,sum2=0;

    for (int i = 0; i < n; i++) {
        sum1 += s1m[i];
        sum2 += s2m[i];
    }
    double avg1=sum1/n;
    double avg2= sum2/n;

    double csum=0;

    for(int i=0;i<n;i++) {
        csum+=(s1m[i]-avg1)*(s2m[i]-avg2);
    }
    double cov=csum/(n - 1);
    cout<<"Covariance is: "<<cov<<endl;

    return 0;
}
