/*
	Autore: Diego Rocco
	Descrizione: Allo stadio il costo del biglietto è gratis fino a 10 anni e sopra i 65,
	costa 5 euro fino a 18 anni e 10 euro per tutti gli altri: scrivi un programma che legge
	un numero intero indicante l'età dello spettatore e visualizza l'importo che deve pagare.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int E;

// Main
int main(){
	// Input
	cout << "Eta: ";
	cin >> E;

	// Elaborazione e Output
	cout << "Costo: ";
	if(E<=10||E>65){
		cout << 0;
	}
	 else{
		if(E<=18){
			cout << 5;
		}
		 else{
			cout << 10;
		 };
	 };
}
