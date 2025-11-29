/*
	Autore: Diego Rocco
	Descrizione: Un agenzia di viaggi calcola il costo di un itinerario come segue:
		Inseriti in Input: Destinazione (dest), Numero di Adulti (ad), Numero
			Bambini (bam), Costo Adulti (adc), Costo Bambini (bamc), Percentuale
			di Prenotazione (per);
		Stampare in Output: Costo Totale (totc) sapendo che se il totale dei
			partecipanti (totp) è maggiore di 20:
				1) Destinazione Italia: 10% sconto
				2) Destinazione Europa: 20% sconto
				3) Destinazione America: 30% sconto
*/

// Intestazione
#include <iostream>
#include <string>
using namespace std;

// Dichiarazione
int dest;
float ad, bam, adc, bamc, per, totc, totp;

// Main
int main(){
	// Input Viaggiatori
	cout << "Numero Adulti: ";
	cin >> ad;
	cout << "Numero Bambini: ";
	cin >> bam;
	totp = ad+bam;

	// Input Prezzi
	cout << "Costo Adulti: ";
	cin >> adc;
	cout << "Costo Bambini: ";
	cin >> bamc;

	// Input Percentuale di Prenotazione
	cout << "Percentuale Prenotazione: ";
	cin >> per;
	per = 1+(per/100);
	
	// Input ed Elaborazione Destinazione e Costo Totale
	totc = ((ad*adc)+(bam*bamc))*per;
	cout << "Destinazione:\n1) Italia\n2) Europa\n3) America\n4) Altro\n";
	cin >> dest;
	if (totp>20){
		switch(dest){
			case 1:
				totc *= 0.9;
				break;
    		case 2:
				totc *= 0.8;
				break;
			case 3:
				totc *= 0.7;
				break;
		};
	}

	// Output
	cout << "Costo Totale: ";
	cout << totc;
	return 0;
}
