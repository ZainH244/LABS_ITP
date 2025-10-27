#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cmath>
using namespace std;
int a;
int stats(int arr[]) {
    double sum = 0, sumd = 0, mean = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    mean = sum / a;
    cout << "Mean is " << mean << endl;

    int arr2[a];
    for (int i = 0; i < a; i++) {
        arr2[i] = arr[i] * arr[i];
    }
    for (int i = 0; i < a; i++) {
        sumd += arr2[i];
    }

    double sd=sqrt((sumd / a) - pow(mean, 2));
    cout<< "Standard deviation is " << sd << endl;

    return 0;
}

int main() {
    srand(time(0));
    cout << "Enter the number of random numbers generated: ";
    cin >> a;

    int b;
    cout << "Enter the range: ";
    cin >> b;

    int rn[a];
    for (int i = 0; i < a; i++) {
        rn[i] = rand() % b;
    }

    cout << "Numbers are: ";
    for (int i = 0; i < a; i++) {
        cout << rn[i] << " ";
    }
    cout << endl;

    stats(rn);
}
