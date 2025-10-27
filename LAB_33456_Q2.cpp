#include <iostream>
#include <sstream>  
#include <string>   
using namespace std;

int main() {
    string l;
    cout<<"Enter text : ";
    getline(cin,l); 

    istringstream stream(l);
    string w;
    int count=0;

    while (stream>>w) {
        count++;
    }

    cout<<"Total number of words: "<<count<<endl;


}
