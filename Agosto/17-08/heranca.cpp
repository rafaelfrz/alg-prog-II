// protegido/protected > permite que a classe derivada veja a superclasse
// publico/public > todos tem acesso
// privado/private > 

#include <iostream>
using namespace std;
class pessoa{
  protected:
    int id;
    string nome, cidade, uf;

  public:
    pessoa(){}
    ~pessoa(){}
    void setId(int id){
      this->id = id;
    }
    void setNome(string nome){
      this->nome = nome;
    }
    int getId(){
      return id;
    }
    string getNome(){
      return nome;
    }

    void mostrar(){
      cout << "Codigo:" << id << "Nome:" << nome << endl;
    }
};

class atleta: public pessoa {
  private:
    float peso, altura;
  public:
    atleta(int id, string nome, float peso, float altura, string cidade, string uf):
      pessoa(id, nome, cidade, uf) {
        this->id = id;
        this->nome = nome;
        this->peso = peso;
        this->altura = altura;
        this->cidade = cidade;
        this->uf = uf;
    }
    ~atleta(){}
    float imc(){
      float i = peso/(altura*altura);
      return i;
    }
    void listar(){
      cout << "Codigo: " << id << "Nome: " << nome <<
        " " << peso << "Altura: " << altura << endl;
    }
};

int main (int argc, char *argv[]) {
  pessoa p(1000, "Fulano", "Chapecó", "SC");
  p.mostrar();
  atleta a(1011, "Joao", 78, 1.78);
  cout << a.imc() << endl;
  a.mostrar();

  return 0;
}
