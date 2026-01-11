/*
    Autore: Diego Rocco
    Classe: 3Cinf
    Consegna: Dato in input un numero positivo, visualizzarne l’inverso, il
        doppio e il quadrato.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
float N=0; // Numero in Input

// Main
int main(){
    // Ciclo Elaborazione
    do{
        // Input Numero
        cout<<"\nInserisci un numero positivo: ";
        cin>>N;

        // Controllo Positivo
        if(N>0){
            // Output
            cout<<"Il suo inverso: "<<-N;
            cout<<"\nIl suo doppio: "<<N*2;
            cout<<"\nIl suo quadrato: "<<N*N;
        }
         else{
             // Controllo Conclusione
             if(N==0){
                 cout<<"Grazie per aver usufruito del nostro servizio!";
                 break;
             }
              else{cout<<"Errore";};
         };
    }while(true); // Fine Ciclo
}