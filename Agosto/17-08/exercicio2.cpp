// Implemente um programa em C++ a partir do diagrama de classes.
// a. A classe Cliente está especializada em Pessoa Jurídica e Pessoa Física.
// b. Os atributos e os métodos estão todos indicados no modelo.
// c. A classe Venda associa as classes Produto e Cliente.
// d. O programa deve instanciar um cliente, um produto e uma venda.
// e. Inclua um atributo preço na classe Produto. Implemente um método que
// retorne o valor total estocado.
// f. Para a classe venda, escreva um método que retorne o código e o nome
// do cliente e, a descrição e a quantidade dos produtos vendidos para ele.

#include <iostream>
using namespace std;
class cliente{
  public:
    int id;
    string nome, endereco;
  public:
    cliente(int id, string nome, string endereco) {
      this->id = id;
      this->nome = nome;
      this->endereco = endereco;
    }
};



int main()
{
  
}
