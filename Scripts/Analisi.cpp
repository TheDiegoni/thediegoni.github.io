/*
    Autore: Rocco Diego
    Classe: 3C inf
    Consegna: I dati relativi al numero di analisi cliniche svolte in un
        laboratorio sono inseriti, giorno per giorno, con una ripetizione che
        termina quando si inserisce 0 come segnalazione della fine dell'input
        dei dati. Comunica il totale delle analisi effettuate nel periodo
        considerato; il programma può essere realizzato sia con l'iterazione
        postcondizionale sia con quella precondizionale.
*/

// intestazione
#include <iostream>
using namespace std;

// dichiarazione
int num, tot, day=0; // numero analisi, totale analisi, giorno

// main
int main(){
    // ciclo esecuzione giorno per giorno
    do{
        day++; // nuovo giorno
        cout<<"Giorno "<<day<<"\nInserisci numero analisi: "; // cout giorno e richiesta analisi
        cin>>num; // cin numero analisi
        tot+=num; // calcolo analisi totali
    }while(num!=0); // fine ciclo

    // output analisi totali
    cout<<"In "<<day-1<<" giorni sono state effettuate "<<tot<<" analisi.";
}