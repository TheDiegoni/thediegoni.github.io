/*
    Autore: Diego Rocco
    Classe: 3Cinf
    Consegna: Scrivi un programma che visualizzi i primi 12 multipli di un numero
        n inserito da tastiera usando un ciclo a conteggio.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
float N; // Numero inserito

// Main
int main(){
    // Input Numero
    cout<<"Inserisci un numero: ";
    cin>>N;

    // Ciclo Elaborazione
    for(int i=1; i<=12; i++){
        cout<<N<<"*"<<i<<"="<<N*i<<endl; // calcolo e output multipli
    }; // Fine Ciclo
}
