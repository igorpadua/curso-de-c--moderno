#include <iostream>
#include <vector>

int main(){

  std::vector<std::string> vet = {"Shell", "C++", "PHP", "Perl"};
  vet.push_back("Linux");
  vet.pop_back();
  std::vector<std::string>::iterator ultimo = vet.end();
  
  std::cout << "O primeiro elemento de vet é: " << *ultimo << '\n';
  std::cout << "O tamanho do meu vector vet é: " << vet.size() << '\n';
  return 0;
}

