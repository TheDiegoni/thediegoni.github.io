/*
    Autore: Diego Rocco
    Traccia: Alla Fine di un Concorso vengono Pubblicati i Risultati delle
        Prove dei Concorrenti: vengono Memorizzati per ogni Partecipante
        il Nome e il Punteggio di 2 Prove. Si vuole Ottenere la Graduatoria
        Finale con la Visualizzazione dei Concorrenti Ordinati in modo
        Decrescente Rispetto al Punteggio Totale Conseguito.
*/

// Intestazione
#include <iostream>
#include <string>
#include <tabulate.hpp> // https://github.com/p-ranav/tabulate/tree/master
using namespace std;
using namespace tabulate;

// Struct Nome
struct Nome{
    string name;
    string surname;
};

// Struct Partecipante al Concorso
struct Partecipante{
    Nome nome;
    int punt1;
    int punt2;
    int puntt;
};

// Prototipazione Sottoprogrammi
void cls(); // Sottoprogramma Pulisci Schermo
void Programma(int p); // Programma Principale
void Ordina(Partecipante vett[], int n); // Sottoprogramma Ordinamento

// Main
int main(){
    // Inizializzazione Programma
    int p=0; // Quantita Partecipanti
    cout<<"Quanti Concorrenti hanno Partecipato? "; cin>>p; // Input Quantita Partecipanti
    cls(); // Chiamata Pulisci Schermo
    Programma(p); // Chiamata Programma Principale

    return 0;
}

// Programma Principale
void Programma(int p){
    // Dichiarazione Locale
    Partecipante P[p]; // Array Partecipanti
    Table tab; tab.format().font_align(FontAlign::center); // Tabella Output

    // Ciclo Input
    for(int i=0; i<p; i++){
        cout<<"Inserisci il Cognome del Concorrente "<<i+1<<": "; cin>>P[i].nome.surname;
        cout<<"Inserisci il Nome del Concorrente "<<i+1<<": "; cin>>P[i].nome.name;
        cout<<"Inserisci il Punteggio della Prima Prova del Concorrente "<<i+1<<" (Numero): "; cin>>P[i].punt1;
        cout<<"Inserisci il Punteggio della Seconda Prova del Concorrente "<<i+1<<" (Numero): "; cin>>P[i].punt2;
        P[i].puntt=P[i].punt1+P[i].punt2;
        cls(); // Chiamata Pulisci Schermo
    };

    Ordina(P, p); // Chiamata Ordinamento

    // Output
    tab.add_row({"Cognome", "Nome", "Prova 1", "Prova 2", "Totale"}); // Aggiungi Fila alla Tabella
    for(int i=0; i<p; i++){
        tab.add_row({P[i].nome.surname, P[i].nome.name, to_string(P[i].punt1), to_string(P[i].punt2), to_string(P[i].puntt)}); // Aggiungi Fila alla Tabella
    };
    cout<<tab; // Output Tabella Dati
}

// Sottoprogramma Pulisci Schermo
void cls(){
	#ifdef _WIN32 // Windows (sia 32 che 64 bit)
		system("cls");
	#else // Linux o macOS
		system("clear");
	#endif
}

// Sottoprogramma Ordinamento
void Ordina(Partecipante vett[], int n){
    Partecipante temp; // Salva Temporaneamente un Valore
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            // Scambio Posizione
            if(vett[j].puntt>vett[i].puntt){
                temp=vett[j];
                vett[j]=vett[i];
                vett[i]=temp;
            };
        };
    };
}