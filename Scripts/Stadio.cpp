#include <iostream>
using namespace std;

int E;

int main(){
	cout << "Eta: ";
	cin >> E;

	cout << "Costo: ";
	if(E<=10||E>65){
		cout << 0;
	}
	else{
		if(E<=18){
			cout << 5;
		}
		else{
			cout << 10;
		};
	};
}