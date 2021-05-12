#include "iostream"
#include "math.h"

#define PI 3.14159265

using namespace std;

double cos_ang(double n){
	return cos((n * PI)/180); 
}

double sen_ang(double n){
	return sin((n * PI)/180);
}

int main(){
	double a, d, r, rl, co;	

	cout.precision(4);
	cout<<fixed;
	while(cin>>a>>d>>r){
		if(r > 90){
			rl = r - 90;
			co = sen_ang(rl)*d/cos_ang(rl);
			cout<<a+co<<endl;
		}else if(r < 90){
			rl = 90 - r;
			co = sen_ang(rl)*d/cos_ang(rl);
			cout<<a-co<<endl;
		}else{
			cout<<a<<endl;
		}
	}
	return 0;
}
