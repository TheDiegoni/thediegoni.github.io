/*
	Autore: Diego Rocco
	Descrizione: Leggi un numero che corrisponde al peso in kg di patate acquistate al mercato:
		sapendo che ogni sacchetto può contenere al massimo 5 kg di patate e una cassetta fino a 30 kg,
		determina il numero di sacchetti (massimo 4) o di cassette (massimo 2) necessari per poter portare
		a casa la spesa.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
float P;
int S=0, C=0;
const int SM=4, CM=2;


// Main
int main(){
	// Input
	cout << "Peso Patate: ";
	cin >> P;

	// Controllo
	while(P>0){
		if(C<2){
			C+=1;
			P-=30;
		}
		 else{
			if(S<4){
				S+=1;
				P-=5;
			}
			 else{
				cout << "Peso Eccessivo\n";
				break;
			 };
		 };
	};

	// Output
	cout << "Sacchetti: " << S;
	cout << "\nCassette: " << C;
	return 0;
}

