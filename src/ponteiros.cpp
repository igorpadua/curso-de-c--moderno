#include <iostream>


void algo( int * );

int main(){

  int numero {369};
  int original = numero;
  int * pnumero = &numero;

  std::cout << "O valor de numero é: " << numero << '\n';
  std::cout << "O valor de pnumero é: " << pnumero << '\n';
  std::cout << "O valor de *pnumero é: " << *pnumero << '\n';
  std::cout << "O valor de original é: " << original << '\n';
  algo( &numero );
  std::cout << "O valor de numero é: " << numero << '\n';
  std::cout << "O valor de *pnumero é: " << *pnumero << '\n';
  std::cout << "O valor de original é: " << original << '\n';
  return 0;
}

void algo( int * nada ){
  *nada = 99;
}
