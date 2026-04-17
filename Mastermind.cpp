/*
	Autore: Diego Rocco
	Traccia: Nel gioco del "Master Mind" l'obiettivo è
		scoprire un codice segreto.

		Il codice è formato da NCIFRE numero di cifre
		(ad esempio 5)

		Le cifre possono essere ripetute

		Bisogna trovare il codice segreto nel minor
		numero di tentativi

		Un tentativo è un codice dello stesso numero di
		cifre

		Il direttore di gioco (o il computer) che sa il
		codice segreto risponde indicando:
			- Quanti "strike" (cifre giuste al posto
			  giusto) sono presenti nel tentativo
			- Quanti "ball" (cifre giuste al posto
			  sbagliato) sono presenti nel tentativo

		Si vince quando il numero di strike è NCIFRE
*/

// Intestazione
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

// Dichiarazione Globale
const int Mv=5, Cc=5, Cl=65/2; // Numero di Mosse, Numero di Cifre, Limite Caratteri

// Prototipazione Sottoprogrammi
void codeg(int Code[]); // Sottoprogramma Generazione Codice
void input(int In[]); // Sottoprogramma Input Risposta
void compare(int In[], int Code[], bool Found[]); // Sottoprogramma Controllo Risposta
void newtry(int &Tries, int In[][Cc], bool Found[][Cc*2]); // Sottoprogramma Nuovo Tentativo
bool correct(bool Found[]); // Sottoprogramma Controllo Corrette
void ClS(); // Sottoprogramma Clear Screen

// Main
int main(){
	// Dichiarazione Globale
	int tries=0, code[Cc], in[Mv][Cc]; // Contatore Tentativi, Vettore Codice Segreto, Vettore Risposta Inserita
	bool found[Mv][Cc*2]; // Vettore Strike e Ball

	// Inizializzazione Gioco
	codeg(code); // Chiamata Generazione Codice
	ClS(); // Chiamata Clear Screen
	cout<<setw(Cl+12)<<"Benvenuti in Master Mind!"<<endl;
	cout<<setw(Cl+(121+floor(log10(Cc)))/2)<<"L'Obiettivo è Scoprire un Codice Segreto di "+to_string(Cc)+" Cifre, che possono esser Ripetute, nel Minor Numero di Tentativi possibili."<<endl;
	cout<<setw(Cl+37)<<"Ogni Tentativo verra Stampato a Schermo con le Cifre Colorate ad Indicare:"<<endl;
	cout<<setw(Cl+28)<<"- Cifre Presenti al Posto Giusto (\033[92mVerdi\033[37m);"<<endl;
	cout<<setw(Cl+30)<<"- Cifre Presenti al Posto Sbagliato (\033[91mRosse\033[37m);"<<endl;
	cout<<setw(Cl+23)<<"- Cifre Non Presenti (\033[90mGrigie\033[37m)."<<endl;
	cout<<setw(Cl+(15+floor(log10(Mv)))/2)<<"Hai "+to_string(Mv)+" Tentativi."<<endl;
	cout<<setw(Cl+7)<<"Buona Fortuna.\n"<<endl;

	// Ciclo Risposte
	do{
		input(in[tries]); // Chiamata Input Risposta
		ClS(); // Chiamata Clear Screen
		compare(in[tries], code, found[tries]); // Chiamata Controllo Risposta
		newtry(tries, in, found); // Chiamata Nuovo Tentativo

		// Chiamata Controllo Corrette
		if(correct(found[tries-1])){
                        cout<<setw(Cl+(34+floor(log10(tries)))/2)<<"Hai Indovinato in "+to_string(tries)+" Tentativi!\n"; // Output Vittoria
                        cin>>tries; return 0; // Fine Programma
                };
	}while(tries<Mv); // Fine Ciclo Risposte

	// Controllo Risposte Esaurite
	if(tries>=Mv){
		// Output Persa
		cout<<setw(Cl+16)<<"Hai perso! La risposta era:\n";
		cout<<setw(Cl-2); for(int i=0; i<Cc; i++){cout<<code[i]<<" ";}; cout<<endl;
		cin>>tries; return 0; // Fine Programma
	};
}

// Sottoprogramma Generazione Codice
void codeg(int Code[]){
	time_t sec=time(NULL); srand(sec); // Generazione Numeri Randomici usanto il Tempo
	for(int i=0; i<Cc; i++){Code[i]=((double)rand()/RAND_MAX)*9;}; // Ciclo Generazione Numeri
}

// Sottoprogramma Nuovo Tentativo
void newtry(int &Tries, int In[][Cc], bool Found[][Cc*2]){
	// Ciclo Stampa Tentativi
	for(int j=0; j<=Tries; j++){
		cout<<setw(Cl-1);
		// Ciclo Stampa Cifre
		for(int i=0; i<Cc*2; i+=2){
			int color=90; // Dichiarazione Variabile Colore
			// Controllo Cifra Ball
			if(Found[j][i]){
				// Controllo Cifra Strike
				if(Found[j][i+1]){color=92;}
				 else{color=91;};
			};
			cout<<"\033["<<color<<"m"<<In[j][i/2]<<"\033[37m "; // Stampa Cifra con Colore Corretto
		};
		cout<<endl;
	};
	cout<<"\n";
	Tries+=1; // Nuovo Tentativo
}

// Sottoprogramma Controllo Risposta
void compare(int In[], int Code[], bool Found[]){
	bool control[Cc]; // Vettore Posizioni Gia Controllate

	// Ciclo Controllo Strike
	for(int i=0; i<Cc*2; i+=2){
		// Controllo Cifra Combaciante
		if(In[i/2]==Code[i/2]){
			Found[i]=1;
			Found[i+1]=1;
			control[i/2]=1;
		}else{
			Found[i]=0;
			Found[i+1]=0;
			control[i/2]=0;
		 };
	};
	// Ciclo Selezione Cifra
	for(int i=0; i<Cc*2; i+=2){
		// Ciclo Controllo Ball
		for(int j=0; j<Cc; j++){
			// Controllo Cifra non Controllata
			if(!control[j] && !Found[i+1]){
				// Controllo Cifra Presente
				if(In[i/2]==Code[j]){
					Found[i]=1;
					control[j]=1;
					break;
				};
			};
		};
	};
	cout<<endl;
}

// Sottoprogramma Controllo Corrette
bool correct(bool Found[]){
	// Ciclo Controllo Corrette
	for(int i=0; i<Cc*2; i+=2){
		if(!(Found[i]&&Found[i+1])){
			return false;
		};
	};
	return true;
}

// Sottoprogramma Input Risposta
void input(int In[]){
	// Input Numeri
	cout<<"Inserisci la Tua Risposta (N1 N2 N3 N4 N5):\n";
	for(int i=0; i<Cc; i++){cin>>In[i];};
}

// Sottoprogramma Clear Screen
void ClS(){
	#ifdef _WIN32 // Windows (sia 32 che 64 bit)
		system("cls");
	#else // Linux o macOS
		system("clear");
	#endif
}
