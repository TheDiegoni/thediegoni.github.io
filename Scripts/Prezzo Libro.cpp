#include <iostream>
#include <string>
using namespace std;

const float sconto=0.8, sconto2=0.9;
const int costoM=30;
float prezzo;
string libro, autore, casa;

int main(){
	cout << "Titolo: ";
	cin >> libro;
	cout << "Autore: ";
	cin >> autore;
	cout << "Casa Editrice: ";
	cin >> casa;
	cout << "Prezzo: ";
	cin >> prezzo;

	if(prezzo>=costoM){
		prezzo *= sconto;
	}
	else{
		prezzo *= sconto2;
	};

	cout << "Prezzo da Pagare: ";
	cout << prezzo;

	return 0;
}
