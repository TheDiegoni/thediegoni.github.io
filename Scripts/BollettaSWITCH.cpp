/*
	Autore: Diego Rocco
	Descrizione: Calcolare il consumo di gas e stampare la bolletta di un utente
	di cui conosco: Nome, Consumo Precedente e Consumo Attuale.
	Sui metri cubi consumati viene calcolato l'importo secondo le seguenti fasce:
	1) m^3 < 160: 0,20€/m^3;
	2) 160 <= m^3 <= 200: 0,27€/m^3;
	3) m^3 > 200: 0,30€/m^3.
	Calcolare l'importo da pagare, aggiungendo una quota fissa di 12,85€ e l'IVA
	del P%, dove P è inserita da tastiera.'
*/

// Intestazione
#include <iostream>
#include <string>
using namespace std;

// Dichiarazione
string Nome;
float CP, CA, CT, P;
int SW;

// Main
int main(){
	// Input Informazioni
	cout << "Inserisci Nome Utente: ";
	cin >> Nome;
	cout << "Inserisci il Consumo del Gas fino al Mese Scorso (m^3): ";
	cin >> CP;
	cout << "Inserisci il Consumo del Gas fino a Questo Mese (m^3): ";
	cin >> CA;
	CT = CA-CP; // Calcolo del Consumo di questo mese
	
	// Controllo Fascia
	cout << "Inserisci la fascia di consumo:\n1) Meno di 160 m^3\n2) Tra 160 e 200 m^3\n3) Piu di 200 m^3\n";
	cin >> SW;
	switch(SW){
		case 1:
			CT*=0.2;
			break;
		case 2:
			CT*=0.27;
			break;
		case 3:
			CT*=0.3;
			break;
	 };

	// Input IVA
	cout << "Inserisci Percentuale IVA: ";
	cin >> P;

	// Calcolo Costo Totale
	CT = (CT+12.85)*(P+100)/100;
	cout << "Pagamento Richiesto: ";
	cout << CT;
}
