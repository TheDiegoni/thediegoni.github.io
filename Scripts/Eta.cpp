/*
	Autore: Diego Rocco
	Descrizione: Dati in input i nomi, gli anni di nascita e le classi di 2 studenti,
		calcolare la loro età media dopo aver confrontato le loro età stampando nome e
		classe del più giovane.
*/

// Intestazione
#include <iostream>
#include <string>
using namespace std;

// Dichiarazione
string nome1, classe1, nome2, classe2;
int eta1, eta2, anno1, anno2, annoA;
float etaM;

// Main
int main(){
	// Permetti caratteri accentati in output
	setlocale(LC_ALL, "italian");

	// Input Informazioni 1° Studente
	cout << "Nome Studente 1: ";
	cin >> nome1;
	cout << "Anno di Nascita " + nome1 + ": ";
	cin >> anno1;
	cout << "Classe " + nome1 + ": ";
	cin >> classe1;

	// Input Informazioni 2° Studente
	cout << "Nome Studente 2: ";
	cin >> nome2;
	cout << "Anno di Nascita " + nome2 + ": ";
	cin >> anno2;
	cout << "Classe " + nome2 + ": ";
	cin >> classe2;

	// Input Anno Attuale
	cout << "Anno Attuale: ";
	cin >> annoA;

	// Calcolo Età
	eta1 = annoA-anno1;
	eta2 = annoA-anno2;
	etaM = (eta1+eta2)/2;
	cout << "Età Media: ";
	cout << etaM;

	// Confronto e Output
	if (eta1>eta2){
		cout << "\nStudente più Giovane: ";
		cout << nome2 << ", " << classe2;
	}
	 else{
		if (eta1==eta2){
			cout << "\nI 2 Studenti hanno la Stessa Età";
		}
		 else{
			cout << "\nStudente più Giovane: ";
			cout << nome1 << ", " << classe1;
		 };
	 };
	return 0;
}

