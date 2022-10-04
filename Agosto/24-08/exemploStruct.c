// EXEMPLO ESTRUTURADO - struct e funçõESTRUTURADO
//
// Como representar OS DADOS DE UM CLIMATIZADOR?

#include <stdio.h>

typedef struct Climatizador {
  char marca[20];
  int btu;
  float preco;
};

int qtd = 0; // Controle da quantidade de climatizadores 

void boasVindas(){ // estrutura função -> retorno nome (parametros) 
  system("cls");
  printft("Bem vindo ao cadastro de Climatizadores \n");
  printft("1 - Cadastrar \n2 - Listar \n3 - sair \n Sua opção");
};

void cadastrarClimatizador() {
  printft("\nDigite os dados: marca, potencia e preço: ");
  fflush(stdin); // file flush stdin = esvazia o arquivo, no caso, standard input
  gets(c[qtd].marca);
  scanf("%d", &c[qtd].btu);
  scanf("%f", &c[qtd].preco);

  printf("Cadastrou o climatizador %s com sucesso", c[qtd].marca);
  qtd++; // incrementa o total de cadastros
  printf("\nTOTAL DE REGISTROS: %d", qtd);
  getch(); // forçar o programa a parar e esperar uma tecla
}

void listarClimatizador() {
  system("cls");
  int i = 0;
  printf("LISTA: ");
  printf("");
}

int quantidadeCadastrada() {
  return 1;
};

struct Climatizador c[10];

int main() {
  printf("Um climatizador tem %d bytes", sizeof(struct Climatizador));
  int op;
  while(1 == 1) {
    boasVindas();
    scanf("%d", &op);
    if(op == 1) {

    }
    if(op == 3) break; // Encerra o loop infinito
  }
};
