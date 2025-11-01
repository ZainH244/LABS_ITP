#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;



int main() {
    srand(time(0));
	int maxn = 100;
	int dead = 10;
	int r = -1;
	int rd = 5;
	int sm = 30;
    int w,h,i;
    double p,pw;

    cout<<"Enter grid width : ";
    cin>>w;
    cout<<"Enter grid height : ";
    cin>>h;
    cout<<"Enter initial number of infected individuals : ";
    cin>>i;
    cout<<"Enter infection probability : ";
    cin>>p;
    cout<< "Enter worsening probability : ";
    cin>>pw;

    int grid[maxn][maxn]={0};
    int ng[maxn][maxn]={0};
    int dinf[maxn][maxn]={0};

    int pl= 0;
    while (pl<i) {
        int x=rand()%w;
        int y=rand()%h;
        if(grid[y][x]==0) {
            grid[y][x]=1+rand()%9;
            dinf[y][x]=1;
            pl++;
        }
    }
    cout<<"\nInitial State:\n";
    for (int y=0;y<h;y++) {
        for(int x=0;x<w;x++) {
            if (grid[y][x]==0){
			cout<<".";
		}
            else if(grid[y][x]==r){
			cout<<"R";
		}
            else if(grid[y][x]==dead) {
			cout<<"X";
		}
            else{
			cout<<grid[y][x];
		}
        }
        cout<<endl;
    }

    for(int day=1;day<=sm;day++) {
        for (int y=0;y<h;y++)
            for(int x=0;x<w;x++)
                ng[y][x]=grid[y][x];

        for(int y=0;y<h;y++){
            for (int x=0;x<w;x++){
                if(grid[y][x]==0){
                    int maxsev=0;
                    int dx[4]={0, 0, -1, 1};
                    int dy[4]={-1, 1, 0, 0};
                    for (int k=0;k<4;k++) {
                        int ny=y+dy[k], nx=x+dx[k];
                        if(ny>=0 && ny < h && nx>= 0 && nx < w) {
                            if(grid[ny][nx]>=1 && grid[ny][nx]<=9) {
                                if((double)rand()/ RAND_MAX < p) {
                                    int newsev=1+rand()%grid[ny][nx];
                                    if(newsev>maxsev)
                                        maxsev=newsev;
                                }
                            }
                        }
                    }
                    if(maxsev>0){
                        ng[y][x]=maxsev;
                        dinf[y][x]=1;
                    }
                }
            }
        }


        for (int y=0; y<h;y++) {
            for (int x=0; x<w;x++) {
                if(grid[y][x] >= 1 && grid[y][x] <=9) {
                    dinf[y][x]++;
                    if ((double)rand() / RAND_MAX <pw) {
                        ng[y][x]=grid[y][x]+1;
                        if (ng[y][x]>9)
                            ng[y][x]=dead;
                    } else {
                        ng[y][x]=grid[y][x] - 1;
                        if (ng[y][x]<1)
                            ng[y][x]=1;
                    }

                    if (dinf[y][x] >= rd && ng[y][x] != dead) {
                        ng[y][x]=r;
                        dinf[y][x]=0;
                    }
                }
            }
        }

        for (int y=0;y<h;y++){
            for (int x=0;x< w;x++){
                grid[y][x] = ng[y][x];
}
}

        int healthy=0,infected=0, recov=0,died = 0;
        for (int y=0;y<h;y++){
            for (int x=0;x<w;x++) {
                if (grid[y][x] == 0){
				 healthy++;
			}
                else if (grid[y][x] >= 1 && grid[y][x] <= 9){
				infected++;
			}
                else if (grid[y][x] == r){
                recov++;
            }
                else if (grid[y][x] == dead){
				died++;
		}
            }
        }

        cout << "\nday "<<day<<" summary:\n";
        cout <<"H: "<<healthy<<"  infected: "<<infected<<"  R: "<<recov<<"  dead: "<<died<< endl;

        for (int y=0;y<h;y++) {
            for (int x=0;x<w;x++) {
                if (grid[y][x]==0){
				cout<<".";
			}
                else if (grid[y][x] == r){
				cout << "R";
			}
                else if (grid[y][x] == dead){
				cout << "X";
			}
                else{
				 cout<<grid[y][x];
			}
            }
            cout<<endl;
        }
    }

    cout<<"\nFinal State after "<<sm<<" days:\n";
    for (int y=0;y<h;y++){
        for (int x=0;x<w;x++) {
            if (grid[y][x]==0) {
			cout<<".";
		}
            else if(grid[y][x]==r) {
			cout << "R";
		}
            else if(grid[y][x]==dead){
			cout<<"X";
		}
            else {
			cout<<grid[y][x];
		}
        }
        cout<<endl;
    }

   
}
