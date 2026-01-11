/*
    Autore: Diego Rocco
    Classe: 3Cinf
    Consegna: Far inserire una serie numerica di interi fermandosi quando viene
inserito due volte consecutive lo stesso numero.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int N, I=0; // Numero Precedente, Numero in Input

// Main
int main(){
    // Ciclo Elaborazione
    do{
        // Salvataggio numero precedente
        N=I;
        
        // Input Numero
        cout<<"\nInserisci un numero intero: ";
        cin>>I;
    }while(N!=I); // Fine Ciclo
}
