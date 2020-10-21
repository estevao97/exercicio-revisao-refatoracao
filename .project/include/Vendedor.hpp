#ifndef VENDEDOR_H
#define VENDEDOR_H


#include "Empregado.hpp"

class Vendedor: public Empregado {
	
  private:
    int _quotaMensal;   
  public:
    Vendedor(std::string nome, double salarioHora, int quotaMensa, double horasTrabalhadas);
     // Retorna a quota mensal do vendedor
    int getQuotaMensal() const;
    // Sobregarga do operador "<<" para projetar o objeto numa saída de dados
    friend std::ostream & operator << (std::ostream &out, const Vendedor &v);

};

#endif