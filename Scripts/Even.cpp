#include <iostream>
using namespace std;

int numero;

int main(){
    cout << "Inserisci Numero: ";
    cin >> numero;
    if(numero%2==0){
        cout << "Pari";
    }
    else{
        cout << "Dispari";
    };
}