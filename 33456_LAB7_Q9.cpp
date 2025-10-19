#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include <string>

using namespace std;

int main() {
    srand(time(0));
    int digits[10];

    for (int i=0;i<10;++i) {
        digits[i]=rand()%10;
    }


    string pn="+92"; 

    for (int i=0;i<10;++i) {
        pn+=to_string(digits[i]);
    }

    cout<<" phone number : "<<pn<<endl;

    return 0;
}
