#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double w=0.0,b=0.0,l=0.01,y,error,x=3.0;
	for(int i=0;i<=1000;i++){
		y=w*x+b;
		error=14-y;
		w=w+l*error*x;
		b=b+l*error;
		if(i%100==0){
		cout<<"step "<<i<<" : "<<"prediction = "<<fixed<<setprecision(4)<<y<<", error = "<<fixed<<setprecision(4)<<error<<endl;
	}
}
		cout<<"Final prediction at x=3 : "<<fixed<<setprecision(4)<<y<<endl;
		cout<<"targeted value 14 "<<endl;
		cout<<"final : w="<<fixed<<setprecision(4)<<w<<","<<" b="<<fixed<<setprecision(4)<<b;
}
