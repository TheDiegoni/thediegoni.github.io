/*
    Autore: Rocco Diego
    Classe: 3C inf
    Consegna: Dopo aver inserito Nominativo e Classe di 10 studenti,
        comunicare in output quanti sono quelli della classe 3Cinf.
*/

// intestazione
#include <iostream>
#include <string.h>
using namespace std;

// dichiarazione
string Name, Class; // Nome e Classe Studente
int Cont=10, Us=0; // Contatore e Numero Studenti della 3Cinf

// main
int main(){
    // Ciclo Elaborazione Studenti
    while(Cont>0){
        // Input Nome Studente
        cout<<"Inserisci il Nome di uno Studente senza Spazi (es. Marco_Rossi): ";
        cin>>Name;
        // Input Classe Studente
        cout<<"Inserisci la sua Classe di Appartenenza (es. 1Aite): ";
        cin>>Class;

        if(Class=="3Cinf"){Us++;}; // Controllo Classe
        Cont--; // Conto alla rovescia
    }; // Fine Ciclo

    // Output Studenti della 3Cinf
    cout<<"Totale Studenti della 3Cinf: "<<Us;
}