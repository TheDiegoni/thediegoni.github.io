/*
Nome del Programma: Calcolo Rimborso Cotral/Metro
Autore: Diego Rocco
Data: 13/11/2025
Descrizione: Calcolo del rimborso scolastico sulle spese si spostamento.
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
