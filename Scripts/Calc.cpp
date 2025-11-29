/*
   Autore: Diego Rocco
   Descrizione: Dati in input 2 numeri e 1 operazione, stampare la soluzione.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int OP;
float N1, N2, S=0;

// Main
int main(){
   // Input Dati
   cout << "Inserisci il Primo Numero: ";
   cin >> N1;
   cout << "Inserisci il Secondo Numero: ";
   cin >> N2;

   // Selezione e Calcolo
   cout << "Inserisci l'Operazione da Svolgere:\n1) Addizione\n2) Sottrazione\n3) Moltiplicazione\n4) Divisione\n";
   cin >> OP;
   switch(OP){
      case 1:
         S = N1+N2;
         break;
      case 2:
         S = N1-N2;
         break;
      case 3:
         S = N1*N2;
         break;
      case 4:
         S = N1/N2;
         break;
   };

   // Output
   cout << "Risultato: " << S;
}
