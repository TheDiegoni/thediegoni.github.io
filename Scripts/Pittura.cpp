#include <iostream>
using namespace std;

float Lato, Diagonale, Area, Barattolo, CostoBarattolo, CostoManodopera, Sconto, CostoTotale;

int main(){
	cout << "Inserisci Lato: ";
	cin >> Lato;
	cout << "\nInserisci Diagonale: ";
	cin >> Diagonale;

	Area = sqrt(Diagonale*Diagonale-Lato*Lato)*Lato;

	Barattolo = 3;
	CostoBarattolo = 15;
	CostoManodopera = 5;
	Sconto = 0.9;

	CostoBarattolo = CostoBarattolo*Area/Barattolo;
	CostoManodopera = CostoManodopera*Area*Sconto;
	CostoTotale = CostoManodopera+CostoBarattolo;

	cout << "\nCosto Materiali: ";
	cout << CostoBarattolo;
	cout << "\nCosto Manodopera: ";
	cout << CostoManodopera;
	cout << "\nCosto Totale: ";
	cout << CostoTotale;

	return 0;
}