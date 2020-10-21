#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"


class Engenheiro: public Empregado {
  private:
    int _numeroProjetos;
    
  public:
  Engenheiro(std::string nome,double salarioHora ,int numeroProjetos, double horasTrabalhadas);
  // Retorna o número de projeto do engenheiro
  int getNumeroProjetos() const; 
  // Sobregarga do operador "<<" para projetar o objeto numa saída de dados
  friend std::ostream & operator << (std::ostream &out, const Engenheiro &e);
	
};

#endif