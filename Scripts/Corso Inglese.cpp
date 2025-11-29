/*
	Autore: Diego Rocco
	Descrizione: In una scuola si stanno raccogliendo le quote di partecipazione
	ad un Corso di Inglese. Il referente del corso ha predisposto le adesioni
	degli alunni su 2 livelli.
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
int NUM1, NUM2;
float X, Y, RIC;
const float REFM=0.9;

// Main
void main(){
  // Input LVL 1
  cout << "Studenti Livello 1: ";
  cin >> NUM1;
  cout << "Costo Livello 1: ";
  cin >> X;
  X *= NUM1;

  // Input LVL 2
  cout << "Studenti Livello 2: ";
  cin >> NUM2;
  cout << "Costo Livello 2: ";
  cin >> Y;
  Y *= NUM2;

  // Elaborazione e Output
  RIC = (X+Y)*REFM;
  cout << "Guadagno: " << RIC;
}
