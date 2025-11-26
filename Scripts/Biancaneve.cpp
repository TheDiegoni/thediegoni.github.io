#include <iostream>
using namespace std;

int N;

int main(){
	cout << "Numero: ";
	cin >> N;

	if(N==1){
		cout << "Dotto";
	}
	else{
		if(N==2){
			cout << "Brontolo";
		}
		else{
			if(N==3){
				cout << "Pisolo";
			}
			else{
				if(N==4){
					cout << "Mammolo";
				}
				else{
					if(N==5){
						cout << "Gongolo";
					}
					else{
						if(N==6){
							cout << "Eolo";
						}
						else{
							if(N==7){
								cout << "Cucciolo";
							}
							else{
								cout << "Biancaneve";
							};
						};
					};
				};
			};
		};
	};
}