/*
   Autore: Diego Rocco
   Descrizione: Realizza un programma che gestisca l’acquisto di un biglietto, sapendo
      che il costo dei biglietti è il seguente:
         - Autobus: 1,50€
         - Metro: 2,00€
         - Treno Regionale: 3,80€
         - Treno Veloce: 7,50€
      Il programma deve: chiedere all’utente la scelta del mezzo, usando switch per
      assegnare il prezzo e chiedere all’utente la fascia d’età in base alla quale
      se Minorenne avrà uno sconto del 30%, se Adulto nessuno sconto, se Over65 avrà
      uno sconto del 20%; chiedere la quantità di biglietti; calcolare e mostrare
      prezzo singolo, eventuale sconto, totale da pagare. Se una delle scelte è errata,
      il programma deve segnalarlo.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int M;
float TR, E, Q;

// Main
int main(){
   // Scelta Mezzo di Trasporto
   cout << "Inserisci il Mezzo che vuoi Utilizzare:\n1) Autobus\n2) Metro\n3) Treno Regionale\n4) Treno Veloce\n";
   cin >> M;
   switch(M){
      case 1:
         TR = 1.5;
         break;
      case 2:
         TR = 2;
         break;
      case 3:
         TR = 3.8;
         break;
      case 4:
         TR = 7.5;
         break;
      default:
         TR = 0;
         cout << "ERRORE";
         break;
   };

   // Controllo Fascia d'Età
   cout << "Inserisci la tua Età: ";
   cin >> E;
   if(E<0){
      E=1;
      cout << "ERRORE";
   }
    else{
       if(E<18){E=0.7;}
        else{
           if(E>65){E=0.8;}
            else{E=1;};
        };
    };

   // Calcolo Quantità Biglietti
   cout << "Inserisci la Quantità di Biglietti da Acquistare: ";
   cin >> Q;

   // Calcolo Prezzi
   TR *= E;
   Q *= TR;
   E = (1-E)*100;

   // Output
   cout << "Prezzo a Biglietto: " << TR << "\nSconto: " << E << "%\n Costo Totale: " << Q;
}
