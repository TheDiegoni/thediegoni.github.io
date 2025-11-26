#include <iostream>
using namespace std;

float V1, V2, M;

int main(){
	cout << "Voto 1: ";
	cin >> V1;
	cout << "Voto 2: ";
	cin >> V2;

	M = (V1+V2)/2;

	if(M>=6){
		cout << "Alunno Promosso";
	}
	else{
		cout << "Alunno Bocciato";
	};
}