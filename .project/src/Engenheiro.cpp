#include <string>
#include "../include/Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome,double salarioHora,int numeroProjetos, double horasTrabalhadas):
  Empregado(nome,salarioHora,horasTrabalhadas), _numeroProjetos(numeroProjetos)  {}

int Engenheiro::getNumeroProjetos() const {
  return _numeroProjetos;
}

  std::ostream & operator << (std::ostream &out, const Engenheiro &e) {
  out << "Nome: " << e.getNome() <<std::endl;
  out << "Salario Mes: " << e.pagamentoMes() << std::endl;
  out <<"Projetos: " << e.getNumeroProjetos() << std::endl ;
  return out;

}