#include <iostream>

int main( int argc , char **argv ){
  char caracter = 'a';
  std::cout << "O valor de caracter é: " << caracter << '\n';

  std::cout << "O valor direto para MAIÚSCULO de caracter é: " << toupper( caracter ) << '\n';

  caracter = toupper( caracter );
  std::cout << "O valor de caracter é: " << caracter << '\n';
  return 0;
}

