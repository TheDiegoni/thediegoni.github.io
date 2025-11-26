#include <iostream>
using namespace std;

int Farina, Pomodoro, Prosciutto, NumeroMargherite, NumeroProsciutto, TotalePizze;

int main(){
	Farina = 100;
	Pomodoro = 350;
	Prosciutto = 50;

	cout << "Pizze Margherita: ";
	cin >> NumeroMargherite;
	cout << "\nPizze al Prosciutto: ";
	cin >> NumeroProsciutto;

	TotalePizze = NumeroMargherite+NumeroProsciutto;
	Farina = Farina*TotalePizze;
	Pomodoro = Pomodoro*NumeroMargherite;
	Prosciutto = Prosciutto*NumeroProsciutto;

	cout << "\nQuantità Farina: ";
	cout << Farina;
	cout << "\nQuantità Pomodoro: ";
	cout << Pomodoro;
	cout << "\nQuantità Prosciutto: ";
	cout << Prosciutto;
	cout << "\n";

	return 0;
}