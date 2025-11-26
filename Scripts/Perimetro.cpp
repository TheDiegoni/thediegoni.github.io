#include <iostream>
#include <math.h>
using namespace std;

float C1, C2, P;

int main(){
	cout << "Cateto 1: ";
	cin >> C1;
	cout << "Cateto 2: ";
	cin >> C2;

	P = C1+C2+(sqrt((C1*C1)+(C2*C2)));
	cout << "Perimetro: ";
	cout << P;
}