#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string _nome; 
    double _salarioHora; 
    double _horasTrabalhadas;

  public:
    Empregado(std::string nome, double salarioHora, double horasTrabalhadas);
     // retorna o nome do empregado
    std::string getNome() const;
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    double pagamentoMes() const;

};

#endif