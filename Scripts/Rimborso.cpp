/*
Nome del Programma: Calcolo Rimborso Cotral/Metro
Autore: Diego Rocco
Data: 13/11/2025
Descrizione: Calcolo del rimborso scolastico sulle spese si spostamento.
*/
#include <iostream>
#include <string>
using namespace std;
// Main
string N, P, M, PS;
float C, D, R=0;
const float RA=0.25, RT=0.3;

int main(){
	cout << "Nome: ";
	cin >> N;
	cout << "Costo: ";
	cin >> C;
	cout << "Provincia Scuola: ";
	cin >> PS;
	cout << "Provincia Studente: ";
	cin >> P;

	if(P==PS){
		cout << "Distanza dalla Scuola: ";
		cin >> D;
		if(D>=20){
			cout << "Mezzo: ";
			cin >> M;
			if(M=="Autobus"){
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