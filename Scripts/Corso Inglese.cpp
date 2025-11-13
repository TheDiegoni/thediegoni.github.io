#include <iostream>
using namespace std;

int NUM1, NUM2;
float X, Y, RIC;
const float REFM=0.9;

void main(){
  cout << "Studenti Livello 1: ";
  cin >> NUM1;
  cout << "Costo Livello 1: ";
  cin >> X;
  X *= NUM1;
  cout << "Studenti Livello 2: ";
  cin >> NUM2;
  cout << "Costo Livello 2: ";
  cin >> Y;
  Y *= NUM2;

  RIC = (X+Y)*REFM;
  cout << "Guadagno: " << RIC;
}
