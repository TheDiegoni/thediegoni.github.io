/*
	Autore: Diego Rocco
	Descrizione: Viene fornito in input il punteggio di un candidato ad un concorso; se
		è compreso tra 0 e 27, visualizzare RESPINTO, tra 28 e 40 visualizzare AMMESSO,
		in tutti gli altri casi ERRORE.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int P;

// Main
int main(){
	// Input Punteggio
	cout << "Inserisci il Punteggio: ";
	cin >> P;

	// Controllo e Output
	if(P>=0&&P<=27){
		cout << "Respinto";
	}
	 else{
		if(P>=28&&P<=40){
			cout << "Ammesso";
		}
		 else{
			cout << "Errore";
		 };
	 };
}
