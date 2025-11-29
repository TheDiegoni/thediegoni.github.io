/*
	Autore: Diego Rocco
	Descrizione: Volendo fare la spesa, si ha a disposizione una certa cifra iniziale.
		Conoscendo l'importo da spendere, verificare se la spesa è possibile.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
float C, B;

// Main
int main(){
	// Input Dati
	cout << "Inserisci il tuo Budget: ";
	cin >> B;
	cout << "Inserisci il Costo da Spendere: ";
	cin >> C;

	// Confronto e Output
	if(B>=C){
		cout << "Spesa Possibile";
	}
	 else{
		cout << "Fuori Budget";
	 };
}
