#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Funcionario {
  string nome;
  float salarioFixo;
  float vendasEfetuadas;
  float salarioTotal;
  float total;
};

float calcSalario(float salario, float vendas) {
  float total;
  total = salario + (vendas * 0.15);
  return total;
}

int main () {
  Funcionario funcionario;

  cout << "Informe o nome do funcionário: ";
  getline(cin, funcionario.nome);
  cout << "Informe o salário fixo do funcionário: R$ ";
  cin >> funcionario.salarioFixo;
  cout << "Informe as vendas efetuadas pelo funcionário: R$ ";
  cin >> funcionario.vendasEfetuadas;
  funcionario.salarioTotal = calcSalario(funcionario.salarioFixo, funcionario.vendasEfetuadas);
  cout << "Salário total do funcionário: R$ " << fixed << setprecision(2) << funcionario.salarioTotal << endl;
}
