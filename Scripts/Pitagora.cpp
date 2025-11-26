#include <iostream>
#include <math.h>
using namespace std;

float NM, N1, N2;

int main(){
	cout << "Inserisci Numero Maggiore: ";
	cin >> NM;
	cout << "Inserisci Altro Numero: ";
	cin >> N1;
	cout << "Inserisci Altro Numero: ";
	cin >> N2;

	if(NM==sqrt(N1*N1+N2*N2)){
		cout << "Triangolo Rettangolo";
	}
	else{
		cout << "Niente Rettangolo";
	};
}