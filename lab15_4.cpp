#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int Pom_me_sog_H[4]={a,b,c,d};
	int Double_H[4]={};
	for(int i = 0 ; i<4;i++){
			Double_H[i]=rand()%4;
			for(int j =0;j<i;j++){
				if(Double_H[i] == Double_H[j]){
					i--;
					break;
				}
			}
			a = Pom_me_sog_H[Double_H[0]];
			b = Pom_me_sog_H[Double_H[1]];
			c = Pom_me_sog_H[Double_H[2]];
			d = Pom_me_sog_H[Double_H[3]];
	}
}
