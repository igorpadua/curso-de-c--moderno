#include <iostream>
#include <vector>
#include <algorithm>

int main( int argc , char **argv ){

  std::string cpf = "785.256.123-98";
  std::cout << "O nosso CPF ANTES de remover os pontos e o traço é: " << cpf << '\n';
  cpf.erase( std::remove( cpf.begin(), cpf.end(), '.' ) , cpf.end()  );
  cpf.erase( std::remove( cpf.begin(), cpf.end(), '-' ) , cpf.end()  );
  std::cout << "O nosso CPF DEPOIS de remover os pontos e o traço é: " << cpf << '\n';
  return 0;
}

