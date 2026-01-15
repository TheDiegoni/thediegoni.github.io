/*
    Autore: Diego Rocco
    Classe: 3Cinf
    Consegna: Scrivi un programma che calcola quante volte il numero 7 compare
        nei numeri compresi tra 1 a 100.
*/

// Intestazione
#include <iostream>
#include <string.h>
using namespace std;

// Dichiarazione
int N=0, C=0, T; // Quantità di 7, Quantità di cifre -1
string S; // Stringa di controllo

// Main
int main(){
    // Ciclo Elaborazione
    for(int i=1; i<=100; i++){
        S=to_string(i); // Assegnazione Valore alla Stringa
        // Calcolo Cifre
        T=i;
        while(T>0){
           T=i/10;
           C++;
        };

        // Ciclo di Controllo
        for(int j=0; j<=C; j++){
            // Controllo Presenza 7 nella Stringa
            if(S[j]=='7'){N++;};
        };
    }; // Fine Ciclo

    // Output
    cout<<"Nell'intervallo tra 1 e 100 sono presenti "<<N<<" cifre pari a 7";
}