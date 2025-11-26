#include <iostream>
using namespace std;

int N1, N2, N3, M;

int main(){
	cout << "1° Numero: ";
	cin >> N1;
	cout << "2° Numero: ";
	cin >> N2;
	cout << "3° Numero: ";
	cin >> N3;

	M = (N1+N2+N3)/3;
	cout << "Media: ";
	cout << M;
}