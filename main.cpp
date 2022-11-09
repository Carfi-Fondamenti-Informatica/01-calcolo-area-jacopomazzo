#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
  float a=0, b=0, c=0;
  cout << "Inserire tre valori reali: " <<endl;
  cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
  float triangolo = (a*b)/2;
  float quadrato = a*a;
  float rettangolo = a*b;
  float trapezio = ((a+b)*c)/2;
  
  cout << triangolo <<endl;
  cout << quadrato <<endl;
  cout << rettangolo <<endl;
  cout << trapezio;

  return 0;
}
