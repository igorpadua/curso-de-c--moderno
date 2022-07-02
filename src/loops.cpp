#include <iostream>

int main(){

  for( int i = 0; i < 15; i++ ){

    for( int k = 0; k < i + 1; k++ ){
        std::cout << "*";
    }

    for( int j = 15; j > 0; j-- ){
      std::cout << " ";
    }

    std::cout << '\n';

  }
  return 0;
}

