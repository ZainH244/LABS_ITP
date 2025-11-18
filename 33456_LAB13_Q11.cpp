#include <iostream>
using namespace std;

void swappointers(int *&a, int *&b) {
    int* temp=a;
    a=b;
    b=temp;
}

int main() {
    int a=5,b=10;
    int *ap=&a;
    int *bp=&b;
    cout<<a<<" "<<b<<endl;
    cout<<ap<<" "<<*ap<<"  "<<bp<<" "<<*bp<<endl;

    swappointers(ap, bp);

    cout<<a<<" "<<b<<endl;
    cout<<ap<<","<<*ap<< "  "<<bp<<", "<<*bp<<endl;

    return 0;
}
