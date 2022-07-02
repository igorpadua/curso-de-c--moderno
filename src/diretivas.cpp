#include <iostream>
#ifndef NUMERO_H
#define NUMERO_H

void funcao(){
  std::cout << "Outra coisa ... " << '\n';
}

#endif



int main(){

#ifdef NUMERO_H
#define NUMERO_H 673
  std::cout << "O valor de NUMERO_H é " << NUMERO_H << '\n';
#endif


  funcao();
  return 0;
}

