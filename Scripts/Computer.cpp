#include <iostream>
using namespace std;

float CPC, PRF, PRV=0;
const float Extra=0.25, PRC=0.1;
int QV;

int main()
{
	cout << "Costo PC: ";
	cin >> CPC;
	cout << "Quantita Venduta: ";
	cin >> QV;

	PRF = CPC*QV*Extra;
	if (PRF>4500){
		PRV = PRF*PRC;
		PRF -= PRV;
	};

	cout << "Profitto: ";
	cout << PRF;
	cout << "\nProvvigione: ";
	cout << PRV;

	return 0;
}