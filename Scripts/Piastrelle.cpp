#include <iostream>
using namespace std;

int Lato1, Lato2, Area, Costo, LatoPiastrella, NumeroPiastrelle;

int main(){
	cout << "Lato 1: ";
	cin >> Lato1;
	cout << "\nLato 2: ";
	cin >> Lato2;
	Area = Lato1*Lato2;

	cout << "\nCosto: ";
	cin >> Costo;
	Costo = Area*Costo;
	cout << "\nSpesa Totale: ";
	cout << Costo;
	
	Area = Area*10000;
	cout << "\n\nLato Piastrella: ";
	cin >> LatoPiastrella;
	NumeroPiastrelle = (LatoPiastrella*LatoPiastrella)/Area;
	cout << "\nNumero Piastrelle: ";
	cout << NumeroPiastrelle;

	return 0;
}