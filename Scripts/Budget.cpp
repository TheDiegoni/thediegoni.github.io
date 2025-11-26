#include <iostream>
using namespace std;

float C, B;

int main(){
	cout << "Budget: ";
	cin >> B;
	cout << "Costo: ";
	cin >> C;
	if(B>=C){
		cout << "Spesa Possibile";
	}
	else{
		cout << "Fuori Budget";
	};
}