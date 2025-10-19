#include <iostream>

using namespace std;

int main() {
    int pn[]={1,2,3,4,5,6,7,8};
    double length[]={150.6,354,172.23,73.33,415.15,415.15,415.15,415.15};
   double width[]={126.9,451.51,75.65,707.17,116.17,116.17,116.17,116.17};
   double area[8];
   double max;
   cout<<"length  : ";
for(int i=0;i<8;i++){
	cout<<length[i]<<"\t";
}
cout<<endl;
cout<<"Width : ";
for(int i=0;i<8;i++){
	cout<<width[i]<<"\t";
}

   for(int i=0;i<8;i++){
   	area[i]=length[i]*width[i];
   }
   cout<<endl;
   cout<<"Area : ";
   for(int i=0;i<8;i++){
	cout<<area[i]<<"\t";
}
cout<<endl;
max=area[0];
for(int i=1;i<=8;i++){
	if(max<area[i]){
		max=area[i];
	}
}
cout<<"Maximum is "<<max<<endl<<" plot number is "<<pn[1];
}
   
