#include "../include/Empregado.hpp"

#define HORA_EXTRA 8

Empregado::Empregado(std::string nome, double salarioHora, double horasTrabalhadas):
 _nome(nome), _salarioHora(salarioHora), _horasTrabalhadas(horasTrabalhadas) {}

std::string Empregado::getNome() const {
    return _nome;
}

double Empregado::pagamentoMes() const  {
      double total = _horasTrabalhadas; 
      if (_horasTrabalhadas > HORA_EXTRA) {
        double x = _horasTrabalhadas - HORA_EXTRA;
        total += x / 2;
      }
	  return total * _salarioHora;
    }