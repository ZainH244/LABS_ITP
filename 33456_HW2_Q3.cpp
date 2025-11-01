#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int w=80;
    int h=20;  
    double ymin=-1.0;
    double ymax=1.0;

    double xmin,xmax;
    cout<<"Enter xmin and xmax (in radians): ";
    cin>>xmin>>xmax;


    char grid[h+1][w+1];

    for(int i=0; i<=h;i++) {
        for (int j=0;j<=w;j++) {
            grid[i][j]=' ';
        }
    }

    int xaxis = (int)((0-ymin)/(ymax-ymin)*h); 
    int yaxis = (int)((0-xmin)/(xmax-xmin)*w);   

    if(xaxis>=0 && xaxis<=h) {
        for (int j =0;j<=w; j++) {
		grid[xaxis][j] = '-';
    }
}

    if(yaxis>=0 && yaxis<=w) {
        for (int i=0;i<=h;i++){
		 grid[i][yaxis] = '|';
	}
    }

    for(int j=0;j<=w;j++) {
        double x=xmin +j*(xmax - xmin)/w;
        double y=sin(x);

        int gridx=j;
        int gridy = (int)round((y - ymin)/(ymax - ymin)* h);
        gridy=h-gridy;

        if(gridy>=0 && gridy <= h)
            grid[gridy][gridx]='*';
    }

    for (int i = 0;i<= h; i++) {
        for (int j=0;j<= w; j++) {
            cout<<grid[i][j];
        }
        cout<<endl;
    }


}
