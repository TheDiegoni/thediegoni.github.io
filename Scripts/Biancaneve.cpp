/*
	Autore: Diego Rocco
	Descrizione: Scrivi un programma che, inserendo un numero compreso tra 1 e 7, visualizza
	il nome del nano corrispondente: per ogni altro numero visualizza "Biancaneve".
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int N;


// Main
int main(){
	//Input
	cout << "Inserisci un numero tra 1 e 7: ";
	cin >> N;

	// Elaborazione e Output
	switch(N){
		case 1:
			cout << "Dotto";
			break;
		case 2:
			cout << "Brontolo";
			break;
		case 3:
			cout << "Pisolo";
			break;
		case 4:
			cout << "Mammolo";
			break;
		case 5:
			cout << "Gongolo";
			break;
		case 6:
			cout << "Eolo";
			break;
		case 7:
			cout << "Cucciolo";
			break;
		default:
			cout << "Biancaneve";
			break;
	};
	return 0;
}
