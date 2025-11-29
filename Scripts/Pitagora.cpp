/*
	Autore: Diego Rocco
	Descrizione: Dati 3 numeri, stabilire se possono essere le misure dei lati di un
		Triangolo Rettangolo.
*/

// Intestazione
#include <iostream>
#include <math.h>
using namespace std;

// Dichiarazione
float NM, N1, N2;

// Main
int main(){
	// Input Dati
	cout << "Inserisci il Numero Maggiore: ";
	cin >> NM;
	cout << "Inserisci un Altro Numero: ";
	cin >> N1;
	cout << "Inserisci un Altro Numero: ";
	cin >> N2;

	// Calcolo, Controllo e Output
	if(NM==sqrt(N1*N1+N2*N2)){
		cout << "Può essere un Triangolo Rettangolo";
	}
	 else{
		cout << "Non può essere un Triangolo Rettangolo";
	 };
}
