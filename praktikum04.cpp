#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int LR= 42;
	cout<<"luas rumah		: "<<LR<<" m2"<<endl;
	
	double LP=1.87596;
	cout<<"Luas 1 Box parket 	: "<<LP<<" m2"<<endl;
	
	double JP=LR/LP;
	cout<<"Jumlah Box parket	: "<<JP<<endl;
	
	double BPR=JP*500;
	cout<<"Biaya parket (Rp)	: "<<BPR<<endl;
}
