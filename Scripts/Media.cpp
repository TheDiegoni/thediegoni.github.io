/*
	Autore: Diego Rocco
	Descrizione: Dati 2 voti, calcolare la media; se è sufficiente, comunicare
		"Alunno Promosso", altrimenti comunicare "Alunno Rimandato"
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
float V1, V2, M;

// Main
int main(){
	// Input Voti
	cout << "Voto 1: ";
	cin >> V1;
	cout << "Voto 2: ";
	cin >> V2;

	// Calcolo e Confronto Media + Output
	M = (V1+V2)/2;
	if(M>=6){
		cout << "Alunno Promosso";
	}
	 else{
		cout << "Alunno Bocciato";
	 };
}
