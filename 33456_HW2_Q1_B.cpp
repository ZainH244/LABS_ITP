#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double w = 4.65, b = 0.10; 
    int n = 10;
    int x[n];
    double y,t;
    int correct= 0;

    cout<<"Enter the values of x: ";
    for (int i=0;i<n;i++) {
        cin>>x[i];
    }

    cout<<setw(6)<<"x"<<setw(12)<<"y"<<setw(12)<<"target"<<setw(12)<<"result"<<endl;
		for(int i=0;i<n;i++){
        y = w * x[i] + b;
        t = 2 * x[i] * x[i] - 4;
        double error=y-t;
		if(error<0){
			error=-error;
		};

        if (error<=1.0) {
            cout<<setw(6)<<x[i]<<setw(12)<<fixed<<setprecision(3)<<y<<setw(12)<<t<<setw(12)<<"correct"<<endl;
            correct++;
        } 
		else{
            cout<<setw(6)<<x[i]<<setw(12)<<fixed<<setprecision(3)<<y<<setw(12)<<t<<setw(12)<< "incorrect"<<endl;
        }
    }

    double ac=(correct/(double)n)*100.0;
    cout << "\nAccuracy = "<<fixed<< setprecision(2)<<ac<< "%" << endl;

    return 0;
}
