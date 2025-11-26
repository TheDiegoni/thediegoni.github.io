#include <iostream>
#include <string>
using namespace std;

string dest;
float ad, bam, adc, bamc, per, totc, totp, sconto;

int main(){
	cout << "Destinazione: ";
	cin >> dest;
	if (dest == "Italia"){
		sconto = 0.9;
	}
	else{
		if (dest == "Europa"){
			sconto = 0.8;
		}
		else{
			sconto = 1;
		};
	};

	cout << "Adulti: ";
	cin >> ad;
	cout << "Bambini: ";
	cin >> bam;
	totp = ad+bam;

	cout << "Costo Adulti: ";
	cin >> adc;
	cout << "Costo Bambini: ";
	cin >> bamc;

	cout << "Percentuale Prenotazione: ";
	cin >> per;
	per = 1+(per/100);
	
	if (totp>20){
		totc = ((ad*adc)+(bam*bamc))*per*sconto;
	}
	else{
		totc = ((ad*adc)+(bam*bamc))*per;
	};
	cout << "Costo Totale: ";
	cout << totc;

	return 0;
}
