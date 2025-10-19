#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int np = 6; 
    int ne = 4; 
    double sales[np][ne] = {0};

    int eid, pid;
    double amount;

    while(cin>>eid>>pid>>amount) {
        if (eid>= 0 && eid<ne && pid>= 0 && pid<np) {
            sales[pid][eid] += amount;
        }
    }

    cout<<setw(12)<< "Product";
    for (int emp =0;emp<ne;emp++) {
        cout << setw(12)<< "Emp " + to_string(emp);
    }
    cout<<setw(18)<<"Total by Product"<<endl;

    for(int prod=0;prod<np;prod++){
        cout<<setw(12)<<"Product " + to_string(prod);
        double totalProduct = 0;
        for (int emp=0; emp<ne;emp++) {
            cout<<setw(12)<<sales[prod][emp];
            totalProduct+=sales[prod][emp];
        }
        cout<<setw(18)<<totalProduct<<endl;
    }


    cout<<setw(12)<<"Total by Emp";
    for(int emp=0;emp<ne;emp++) {
        double totalEmp =0;
        for (int prod=0;prod<np;prod++) {
            totalEmp +=sales[prod][emp];
        }
        cout<<setw(12)<<totalEmp;
    }
    cout << endl;

    return 0;
}
