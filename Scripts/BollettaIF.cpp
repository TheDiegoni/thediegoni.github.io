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
	if(CT<160){CT*=0.2;}
	 else{
	 		 if(CT>200){CT*=0.3;}
	 		  else{CT*=0.27;};
	 };

	// Input IVA
	cout << "Inserisci Percentuale IVA: ";
	cin >> P;

	// Calcolo Costo Totale
	CT = (CT+12.85)*(P+100)/100;
	cout << "Pagamento Richiesto: ";
	cout << CT;
}
