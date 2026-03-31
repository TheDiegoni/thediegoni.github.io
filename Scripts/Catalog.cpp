/*
	Autore: Diego Rocco
	Traccia: Dopo aver Caricato i Dati di N Auto, si vuole
		conoscere con un Menu il Risultato delle
		seguenti Scelte:
			- Prezzo Medio Auto
			- Prezzo Auto Rosse
			- Marca Auto + Economica
			- Modello Auto + Nuova
			- Marca e Prezzo in Ordine Crescente di
				Prezzo
*/

// Intestazione
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

// Dichiarazione Globale
int q; // Quantita di Auto su cui Lavorare

// Prototipazione Sottoprogrammi
void program(); // Programma Principale
void ClS(); // Sottoprogramma Pulisci Schermo
string lower(string Str); // Sottoprogramma LowerCase
void PrM(float Pr[]); // Sottoprogramma Calcolo Prezzo Medio
void PrR(float Pr[], string Co[]); // Sottoprogramma Prezzi Auto Rosse
void MaE(string Ma[], float Pr[]); // Sottoprogramma Marca Economica
void MoN(string Mo[], int An[]); // Sottoprogramma Ultimo Modello
void OrP(float Pr[], string Ma[]); // Sottoprogramma Ordine di Prezzo

// Main
int main(){
	// Inizializzazione Programma
	do{
		ClS(); // Chiamata Pulisci Schermo

		// Input Quantita Auto
		cout<<"Benvenuto alla Concessionaria, Quante Macchine vuole Confrontare?\n(Inserire 0 per concludere) ";
		cin>>q;

		// Controllo Quantita Legale
		if(q>0){
			program(); // Chiamata Programma Principale
		};
	}while(q>0);

	return 0; // Fine Programma
}

// Programma Principale
void program(){
	// Dichiarazione Locale
	string Ma[q], Mo[q], Co[q]; // Array Marche, Modelli e Colori
	float Pr[q]; int An[q]; // Array Prezzi e Anni di Immatricolazione
	int s=0; // Scelta Opzione

	// Ciclo Input
	for(int i=0; i<q; i++){
		ClS(); // Chiamata Pulisci Schermo
		// Input Dati
		cout<<"Inserisci la Marca della Macchina "+to_string(i+1)+": "; cin>>Ma[i];
		cout<<"Inserisci il Modello della Macchina "+to_string(i+1)+": "; cin>>Mo[i];
		cout<<"Inserisci il Colore della Macchina "+to_string(i+1)+": "; cin>>Co[i];
		cout<<"Inserisci il Prezzo della Macchina "+to_string(i+1)+": "; cin>>Pr[i];
		cout<<"Inserisci l'Anno di Immatricolazione della Macchina "+to_string(i+1)+": "; cin>>An[i];
	};

	ClS(); // Chiamata Pulisci Schermo

	// Ciclo Elaborazione
	do{
		// Menu e Input Selezione
		cout<<"Cosa vuoi Verificare?";
		cout<<"\n1) Prezzo Medio";
		cout<<"\n2) Prezzi Auto di Colore Rosso";
		cout<<"\n3) Marca Auto dal Prezzo Minore";
		cout<<"\n4) Modello Auto piu Nuova";
		cout<<"\n5) Marche in Ordine di Prezzo";
		cout<<"\n0) Exit   "; cin>>s;

		ClS(); // Chiamata Pulisci Schermo

		// Selezione Output
		switch(s){
			case 1:
				PrM(Pr); // Chiamata Calcolo Prezzo Medio
				break;
			case 2:
				PrR(Pr, Co); // Chiamata Prezzi Auto Rosse
				break;
			case 3:
				MaE(Ma, Pr); // Chiamata Marca Economica
				break;
			case 4:
				MoN(Mo, An); // Chiamata Ultimo Modello
				break;
			case 5:
				OrP(Pr, Ma); // Chiamata Ordine di Prezzo
				break;
			case 0:
				return; // Fine Sottoprogramma
		}; cout<<"\n\n\n";
	}while(s!=0);
}

// Sottoprogramma Pulisci Schermo
void ClS(){
	#ifdef _WIN32 // Windows (sia 32 che 64 bit)
		system("cls");
	#else // Linux o macOS
		system("clear");
	#endif
}

// Sottoprogramma LowerCase
string lower(string Str){
	// Ciclo Lowercase
	for(int i=0; i<Str.length(); i++){
		if(Str[i]>=65&&Str[i]<=90){Str[i]+=32;}; // Controllo Uppercase e Conversione in Lowercase
	};
	return Str; // Restituisci la Stringa Risultante
}

// Sottoprogramma Calcolo Prezzo Medio
void PrM(float Pr[]){
	float me=0; // Media
	for(int i=0; i<q; i++){me+=Pr[i];}; // Ciclo Calcolo Prezzo Totale
	me/=(float)q; // Calcolo Media
	cout<<"Prezzo Medio: "<<me; // Output Media
}

// Sottoprogramma Prezzi Auto Rosse
void PrR(float Pr[], string Co[]){
	cout<<"Prezzi Auto Rosse: ";
	// Ciclo Output
	for(int i=0; i<q; i++){
		if(lower(Co[i])=="rosso"||lower(Co[i])=="rossa"){cout<<Pr[i]<<" ";}; // Controllo Colore Rosso e Output Prezzo
	};
}

// Sottoprogramma Marca Economica
void MaE(string Ma[], float Pr[]){
	// Dichiarazione Locale
	int pu=0; // Posizione Marca + Economica

	// Ciclo Find Economica
	for(int i=1; i<q; i++){
		if(Pr[i]<Pr[i-1]){pu=i;}; // Controllo + Economica
	};

	cout<<"Marca Meno Costosa: "<<Ma[pu]; // Output
}

// Sottoprogramma Ultimo Modello
void MoN(string Mo[], int An[]){
	// Dichiarazione Locale
	int pu=0; // Posizione Ultimo Modello

	// Ciclo Find Nuova
	for(int i=1; i<q; i++){
		if(An[i]>An[i-1]){pu=i;}; // Controllo + Nuova
	};

	cout<<"Ultimo Modello: "<<Mo[pu]; // Output
}

// Sottoprogramma Ordine di Prezzo
void OrP(float Pr[], string Ma[]){
	// Dichiarazione Globale
	int c=0, j=0; // Quantita Massima Cifre Prezzo, Contatore Ordinamento
	int p, pr[q]; string m, ma[q]; // Prezzi e Modelli Salvati

	// Ciclo Calcolo Quantita Cifre e Copia Array
	for(int i=0; i<q; i++){
		if(log10(Pr[i])>c){c=log10(Pr[i]);}; // Controllo e Aggiornamento Quantita di Cifre

		pr[i]=Pr[i]; ma[i]=Ma[i]; // Copia Array
	};

	// Ciclo Ordinamento
	while(j<q-1){
		if(pr[j]>pr[j+1]){
			p=pr[j]; m=ma[j];
			pr[j]=pr[j+1]; ma[j]=ma[j+1];
			pr[j+1]=p; ma[j+1]=m;
			j-=2;
		};

		j++; // Aumento Contatore
	};

	// Ciclo Output
	for(int i=0; i<q; i++){cout<<pr[i]<<setw(c-log10(pr[i])+3+ma[i].length())<<ma[i]<<endl;};
}
