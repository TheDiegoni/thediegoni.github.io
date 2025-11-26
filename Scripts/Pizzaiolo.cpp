/*
	Autore: Diego Rocco
	Descrizione:Con 4 hg di prosciutto, 1,4 Kg di pomodori, 1200 gr di farina 
		si possono preparare: 4 Pizze Margherita e 8 Pizze al Prosciutto. 
		Inserito in input  Numero delle pizze da preparare, calcolare 
		il fabbisogno di ogni ingrediente , sapendo che tutte le 
		pizze hanno lo stesso peso. 
*/

// Intestazione
#include <iostream>
using namespace std;

// Dichiarazione
const int Farina=100, Pomodoro=350, Prosciutto=50;
int NumeroMargherite, NumeroProsciutto, TotalePizze;

// Main
int main(){
	// Input
	cout << "Pizze Margherita: ";
	cin >> NumeroMargherite;
	cout << "\nPizze al Prosciutto: ";
	cin >> NumeroProsciutto;

	// Elaborazione
	TotalePizze = NumeroMargherite+NumeroProsciutto;
	Farina = Farina*TotalePizze;
	Pomodoro = Pomodoro*NumeroMargherite;
	Prosciutto = Prosciutto*NumeroProsciutto;

	// Output
	cout << "\nQuantità Farina: ";
	cout << Farina;
	cout << "\nQuantità Pomodoro: ";
	cout << Pomodoro;
	cout << "\nQuantità Prosciutto: ";
	cout << Prosciutto;
	cout << "\n";
	return 0;
}
