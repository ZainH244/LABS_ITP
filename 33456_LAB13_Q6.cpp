#include <iostream>
using namespace std;

void sentencecase(char *txt, int *size) {
    bool cn=true;    

    for (int i=0;i<*size;i++) {
			 if(txt[i]>='A' && txt[i]<= 'Z') {
            txt[i]=txt[i] + 32; 
        }

        if(txt[i]>='a' && txt[i]<='z'){
				if(cn){
                txt[i]=txt[i]-32;  
                cn=false;
            }
        }
        if (txt[i]=='.'){
            cn=true;
        }
    }
}

int main() {

    char text[200];
    int size;

    cout<<"Enter number of characters: ";
    cin>>size;

    cin.ignore(); 

    cout<<"Enter text: ";
    cin.getline(text,size+1);

    sentencecase(text,&size);

    cout<< "\nsentence case output:\n";
    cout<<text<<endl;
}
