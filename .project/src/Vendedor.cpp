#include <string>
#include "../include/Vendedor.hpp"

Vendedor::Vendedor(std::string nome, double salarioHora, int quotaMensal,  double horasTrabalhadas):
  Empregado(nome,salarioHora,horasTrabalhadas), _quotaMensal(quotaMensal)  {}

int Vendedor::getQuotaMensal() const {
  return _quotaMensal;
}

std::ostream & operator << (std::ostream &out, const Vendedor &v) {
  out << "Nome: " << v.getNome()<< std::endl;
  out << "Salario Mes: " << v.pagamentoMes() << std::endl;
  out << "Quota vendas: " << v.getQuotaMensal() << std::endl;
  return out;
  }

