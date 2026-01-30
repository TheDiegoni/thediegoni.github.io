/*
 * Autore: Rocco Diego
 * Traccia: Si vuole automatizzare il calcolo delle ore
 *   lavorate settimanalmente (su 5 giorni) da ciascun
 *   dipendente di una Ditta. Sviluppare un Algoritmo
 *   (Tabella dei dati + diagramma a blocchi) che, dati in
 *   input gli orari (in ore e minuti) di entrata e di
 *   uscita della settimana riportati nel cartellino
 *   personale, calcoli approssimativamente, il totale delle
 *   ore da retribuire per tutti i dipendenti.
*/

// Intestazione
#include <iostream>
#include <string>
using namespace std;

// Dichiarazione Globale
string N; // Nome Dipendente
int M=0, Min; // Tempo Lavorativo in Minuti, Tempo Lavorativo in Minuti per Dipendente
int MinE, MinU, OreE, OreU; // Minuti e Ore Entrata e Uscita Dipendenti

// Dichiarazione Sottoprogrammi
int I(); // Sottoprogramma Input
int C(); // Sottoprogramma Calcolo
void O(); // Sottoprogramma Output

// Main
int main(){
	// Ripetizione del Programma
	while(true){
		Min=0; // Inizializzazione Minuti per Dipendente

		// Input Nome Dipendente
		cout<<"\nNome Dipendente (\"stop\" per concludere): ";
		cin>>N;

		// Controllo Esecuzione
		if(N=="stop"){
			cout<<"Totale da Pagare: "<<M/60<<" Ore"; // Output Finale
			return 0; // Termine Programma
		}
		 else{
			I(); // Chiamata Input
			O(); // Chiamata Output
		 };
	};
	return 0;
}

// Sottoprogramma Input
int I(){
	// Ciclo Input Settimanale
	for(int i=1; i<=5; i++){
		// Input Orari Giornalieri
		cout<<"Orario entrata giorno "<<i<<" (\"Ore Minuti\"): ";
		cin>>OreE; cin>>MinE;
		cout<<"Orario uscita giorno "<<i<<" (\"Ore Minuti\"): ";
		cin>>OreU; cin>>MinU;

		C(); // Chiamata Calcolo
	};
	return 0; // Termine Sottoprogramma
}

// Sottoprogramma Calcolo
int C(){
	// Calcolo Ore della Settimana
	MinU+=OreU*60-(OreE*60+MinE);
	Min+=MinU;

	M+=MinU; // Calcolo Ore Totali
	return 0; // Termine Sottoprogramma
};

// Sottoprogramma Output
void O(){
	// Calcolo e Output Ore per Dipendente
	Min/=60;
	cout<<"Ore da pagare a "<<N<<": "<<Min;
};
