#include <iostream>
using namespace std;

int P;

int main(){
	cout << "Punteggio: ";
	cin >> P;

	if(P>=0&&P<=27){
		cout << "Respinto";
	}
	else{
		if(P>=28&&P<=40){
			cout << "Ammesso";
		}
		else{
			cout << "Errore";
		};
	};
}