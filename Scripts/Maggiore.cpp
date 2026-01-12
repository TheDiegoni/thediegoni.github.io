/*
    Autore: Diego Rocco
    Classe: 3Cinf
    Consegna: Scrivi un programma che legge 10 numeri e ne stampa il massimo.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
float I, O=0; // Numero in Input, Numero Maggiore in Output

// Main
int main(){
    // Ciclo Input
    for(int j=0; j<10; j++){
        // Input Numero
        cout<<"Inserisci un numero: ";
        cin>>I;

        // Controllo Maggiore
        if(I>O){O=I;};
    };

    // Output
    cout<<"Il maggiore è: "<<O;
}
