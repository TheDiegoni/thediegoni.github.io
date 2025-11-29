/*
Nome del Programma: Calcolo Rimborso Cotral/Metro
Autore: Diego Rocco
Data: 13/11/2025
Descrizione: La scuola rimborsa il 25% del costo dell'abbonamento se lo studente abita
	nella stessa provincia, usa l'autobus ed è distante almeno 20 km dalla scuola; alle
	stesse condizioni se usa il treno il rimborso è pari al 30%. Dopo aver inserito il
	nominativo dello studente, il costo dell'abbonamento e gli altri dati necessari,
	calcolare e stampare il rimborso e il nominativo dello studente.
*/

// Intestazione
#include <iostream>
#include <string>
using namespace std;

// Dichiarazione
string N, P, M, PS;
float C, D, R=0;
const float RA=0.25, RT=0.3;

// Main
int main(){
	// Input Informazioni
	cout << "Nome Studente: ";
	cin >> N;
	cout << "Costo Abbonamento: ";
	cin >> C;
	cout << "Provincia Scuola: ";
	cin >> PS;
	cout << "Provincia Studente: ";
	cin >> P;

	// Controllo Provenienza
	if(P==PS){
		// Input e Controllo Distanza
		cout << "Distanza dalla Scuola: ";
		cin >> D;
		if(D>=20){
			// Input e Controllo Mezzo di Trasporto
			cout << "Mezzo (Bus, Treno o Altro): ";
			cin >> M;
			if(M=="Bus"){
				R = C*RA;
			}
			 else{
				if(M=="Treno"){
					R = C*RT;
				};
			 };
		};
	};

	cout << N << ": " << R;
}
