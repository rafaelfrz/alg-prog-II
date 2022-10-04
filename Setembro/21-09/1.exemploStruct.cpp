#include <iostream>
#include <string>
using namespace std;

struct Aluno {
  string nome;
  int matricula;
  float nota1;
  float nota2;
  float nota3;
  float media;
  bool aprovado;
};

int main () {
  int alunos;

  cout << "Quantos alunos? ";
  cin >> alunos;

  Aluno aluno[alunos];

  for(int i = 0; i < alunos; i++) {
    cout << "Digite o nome do aluno: ";
    cin >> aluno[i].nome;
    cout << "Digite a matricula do aluno: ";
    cin >> aluno[i].matricula;
    cout << "Digite as notas do aluno: \n";
    cin >> aluno[i].nota1 >> aluno[i].nota2 >> aluno[i].nota3;
    cout << "\n";
    aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
    cout << "Media do aluno: ";
    cout << aluno[i].media;
    if (aluno[i].media <= 7) {
      aluno[i].aprovado = false;
    } else {
      aluno[i].aprovado = true;
    }
  }

  cout << "Alunos aprovados" << endl;
  for (int i = 0; i < alunos; i++) {
    if (aluno[i].aprovado) {
      cout << "Nome: " << aluno[i].nome << endl;
      cout << "Matricula: " << aluno[i].matricula << endl;
      cout << "Media do aluno: " << aluno[i].media << endl;
    }
  }

  cout << "Alunos reprovados" << endl;
  for (int i = 0; i < alunos; i++) {
    if (!aluno[i].aprovado) {
      cout << "Nome: " << aluno[i].nome << endl;
      cout << "Matricula: " << aluno[i].matricula << endl;
      cout << "Media do aluno: " << aluno[i].media << endl;
    }
  }
}
