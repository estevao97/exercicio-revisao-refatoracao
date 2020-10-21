#include <iostream>

#include "../include/Empregado.hpp"
#include "../include/Engenheiro.hpp"
#include "../include/Vendedor.hpp"

int main() {

  Engenheiro eng1("Joao Snow",35,3,9.5);
  std::cout << eng1;

  Engenheiro eng2("Daniela Targaryen",30,1,8);
  std::cout << eng2;
  
  Engenheiro eng3("Bruno Stark",30,2,8);
  std::cout << eng3;
  

  Vendedor vend1("Tonho Lannister",20,5000,6);
  std::cout << vend1;

  Vendedor vend2("Jose Mormont",25,3000,8);
  std::cout << vend2;

  Vendedor vend3("Sonia Stark",30,4000,8);
  std::cout << vend3;
  
  return 0;	
}