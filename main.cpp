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
  
  cout << "L'area di triangolo, quadrato, rettangolo e trapezio e' rispettivamente: \n";
  cout << "Triangolo con 'a' base e 'b' altezza = "<< triangolo <<endl;
  cout << "Quadrato con lato 'a' = "<< quadrato <<endl;
  cout << "Rettangolo con 'a' e 'b' rispettivamente lati = "<< rettangolo <<endl;
  cout << "Trapezio con 'a' e 'b' basi e 'c' altezza = "<< trapezio;

  return 0;
}
