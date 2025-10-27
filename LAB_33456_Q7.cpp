#include <iostream>
using namespace std;

int main() {
    int cnum,nnum;
    int cc=1;
    int bnum,bc=1;

    bnum = cnum;

    while(cin>>nnum) {
        if(nnum==cnum) {
            cc++;
        } else {
            if(cc>bc) {
                bc=cc;
                bnum=cnum;
            }
            cnum=nnum;
            cc=1;
        }
    }

    if(cc>bc) {
        bc=cc;
        bnum=cnum;
    }
    cout <<"Longest run: "<< bnum <<" consecutive "<<bc<<"s"<<endl;
}
