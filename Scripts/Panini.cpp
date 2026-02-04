/*
    Autore: Diego Rocco
    Traccia: Una paninoteca vende panini a 5.50 euro‚ e bibite a 3 euro, e offre
		una promozione: se un panino e bibita vengono acquistati insieme, la
		bibita e a meta prezzo. Scrivi una funzione che riceve in ingresso il
		numero di panini e di bibite complessivi richiesti da un gruppo di
		clienti e calcola il totale da pagare.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione Globale
const float pp=5.50, pb=3; // Prezzo Panini, Prezzo Bibite
float p, b, pt; // Numero Panini, Numero Bibite, Prezzo Totale

// Prototipazione Sottoprogrammi
void C(); // Sottoprogramma Calcolo e Output

// Main
int main(){
    // Input Quantita
    cout<<"Inserisci il numero di panini richiesti: ";
    cin>>p;
    cout<<"Inserisci il numero di bibite richieste: ";
    cin>>b;

    C(); // Chiamata Calcolo e Output

    return 0; // Fine Programma
}

// Sottoprogramma Calcolo
void C(){
    // Controllo Quantita  e Calcolo Prezzo Bibite
    if(b>=p){b=((b-p)*pb)+(p*(pb/2));}
     else{b*=pb/2;};

    p*=pp; // Calcolo Prezzo Panini
    pt=b+p; // Calcolo Prezzo Totale
    cout<<"Il totale da pagare ammonta a: "<<pt; // Output Prezzo Totale
}
