#include<iostream>
#include<cstring>
using namespace std;

int wordcount(char *text, int *size) {
    int wc =0;
    int lc = 0;
    bool inword=false;

    int length=strlen(text);   

    for (int i=0;i<length;i++) {

        if ((text[i]>='a' && text[i]<='z') ||(text[i]>='A' && text[i]<= 'Z')) 
        {
            lc++;
        }

        if(text[i]!=' ' && !inword) {
            wc++;
            inword=true;
        }
        else if(text[i]==' ') {
            inword=false;
        }
    }

    *size=lc;  
    return wc;    
}

int main() {
    char text[100];

    cout<<"Enter a sentence: ";
    cin.getline(text,100);

    int size=0;
    int words=wordcount(text,&size);

    cout<<"Number of words: "<<words<<endl;
    cout<< "Number of letters: "<<size<<endl;

    return 0;
}
