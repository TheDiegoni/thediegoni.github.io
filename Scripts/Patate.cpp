#include <iostream>
using namespace std;

float P;
int S=0, C=0;
const int SM=4, CM=2;

int main(){
	cout << "Peso Patate: ";
	cin >> P;

	while(P>0){
		if(C<2){
			C+=1;
			P-=30;
		}
		else{
			if(S<4){
				S+=1;
				P-=5;
			}
			else{
				cout << "Peso Eccessivo\n";
				break;
			};
		};
	};

	cout << "Sacchetti: " << S;
	cout << "\nCassette: " << C;

	return 0;
}
