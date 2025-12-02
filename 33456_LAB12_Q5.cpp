#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int s=4;

bool match(bool shown[s][s]) {
    for(int i=0;i<s;i++)
        for(int j=0; j<s;j++)
            if(!shown[i][j])
                return false;
    return true;
}


void play(int board[s][s],bool shown[s][s]) {
    if(match(shown)) {  
        cout<<"Congrats You matched all cards"<<endl;
        return;  
    }
	int r1,c1,r2,c2;

    cout << "\nCurrent Board:\n";
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(shown[i][j])
                cout<<board[i][j]<<" ";
            else
                cout<<"* ";
        }
        cout<<endl;
    }
    cout<< "\nEnter first card (row column): ";
    cin>>r1>>c1;
    cout << "Enter second card (row column): ";
    cin>>r2>>c2;


    cout << "\nYou flipped: " <<board[r1][c1]<<" and " <<board[r2][c2]<<endl;

    if (board[r1][c1] == board[r2][c2] && !(r1==r2 && c1==c2)) {
        cout << "Match! Cards stay face up.\n";
        shown[r1][c1] = true;
        shown[r2][c2] = true;
    } 
    else {
        cout<< "Not a match try again\n";
    }

    play(board, shown); 
}

int main() {
    srand(time(0));

    int values[16] ={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8};
    int board[s][s];
    bool shown[s][s] = { false };


    for(int i=0; i<16;i++) {
        int r = rand()%16;
        swap(values[i],values[r]);
    }

     int k=0;
    for(int i=0;i<s;i++)
        for(int j=0;j<s;j++)
            board[i][j]=values[k++];

    cout << "memory matching Game tarted \n";
    play(board, shown);

    return 0;
}
