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
int p, b; // Numero Panini, Numero Bibite

// Prototipazione Sottoprogrammi
void C(float p, float b); // Sottoprogramma Calcolo e Output

// Main
int main(){
    // Input Quantita
    cout<<"Inserisci il numero di panini richiesti: ";
    cin>>p;
    cout<<"Inserisci il numero di bibite richieste: ";
    cin>>b;

    C((float) p, (float) b); // Chiamata Calcolo e Output

    return 0; // Fine Programma
}

// Sottoprogramma Calcolo
void C(float p, float b){
    const float pp=5.50, pb=3; // Dichiarazione Locale Prezzo Panini, Prezzo Bibite

    // Controllo Quantita  e Calcolo Prezzo Bibite
    if(b>=p){b=((b-p)*pb)+(p*(pb/2));}
     else{b*=pb/2;};

    p*=pp; // Calcolo Prezzo Panini
    float pt=b+p; // Dichiarazione Locale e Calcolo Prezzo Totale
    cout<<"Il totale da pagare ammonta a: "<<pt; // Output Prezzo Totale
}
