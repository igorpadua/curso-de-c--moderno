#include <iostream>

int soma( int x, int y ){
  return x + y;
}

int main(){
  std::cout << "O valor de x + y = " << soma( 3, 9 ) << '\n';
  std::cout << "O valor de x + y = " << soma( 36, 90 ) << '\n';
  std::cout << "O valor de x + y = " << soma( 33, 96 ) << '\n';
  std::cout << "O valor de x + y = " << soma( 0, 1 ) << '\n';
  return 0;
}

