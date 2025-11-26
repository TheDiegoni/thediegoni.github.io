#include <iostream>
#include <string>
using namespace std;

string nome1, classe1, nome2, classe2;
int eta1, eta2, anno1, anno2, annoA;
float etaM;

int main(){
	setlocale(LC_ALL, "italian");

	cout << "Primo Nome: ";
	cin >> nome1;
	cout << "Primo Anno: ";
	cin >> anno1;
	cout << "Prima Classe: ";
	cin >> classe1;
	cout << "Secondo Nome: ";
	cin >> nome2;
	cout << "Secondo Anno: ";
	cin >> anno2;
	cout << "Seconda Classe: ";
	cin >> classe2;
	cout << "Anno Attuale: ";
	cin >> annoA;

	eta1 = annoA-anno1;
	eta2 = annoA-anno2;
	etaM = (eta1+eta2)/2;
	cout << "Età Media: ";
	cout << etaM;

	if (eta1>eta2){
		cout << "\nPiù Giovane: ";
		cout << nome2;
		cout << ", ";
		cout << classe2;
	}
	else{
		if (eta1==eta2){
			cout << "\nHanno la Stessa Età";
		}
		else{
			cout << "\nPiù Giovane: ";
			cout << nome1 << ", " << classe1;
		};
	};

	return 0;
}
