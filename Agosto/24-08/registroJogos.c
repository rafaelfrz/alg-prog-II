#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Jogos {
  char nome[60];
  char desenvolvedora[20];
  char publisher[20];
  char genero[20];
  float preco;
  int dia, mes, ano;
} Jogos;

void boasVindas(){
  system("clear");
  printf("Bem vindo, escolha a operação que deseja\n");
  printf("1 - Consultar jogos\n 2 - Cadastrar novo jogo\n 3 - Sair");
};

void cadastrarJogo(){
  printf("\nDigite os dados: nome, desenvolvedora, publisher, genero preço, data de publicação (DD/MM/YYYY)");
  fflush(stdin);
  fgets(j[i].nome, sizeof(j[i].nome), stdin);
  fgets(j[i].desenvolvedora, sizeof(j[i].desenvolvedora), stdin);
  fgets(j[i].publisher, sizeof(j[i].publisher), stdin);
  fgets(j[i].genero, sizeof(j[i].genero), stdin);
  scanf("%i/%i/%i", &dia, &mes, &ano);

  printf("Cadastrou o jogo '%s' com sucesso", j[i].nome);
  i++;
  getch();
};

void listarJogos(){
  system("clear");
  int k = 0;
  printf("LISTA: ");
  printf("\nNOME \tDESENVOLVEDORA PUBLISHER GENERO PRECO DATA DE PUBLICAÇÃO");
  while(j < i) {
    printf("\n%s \t", j[k].nome);
    printf("%s ", j[k].desenvolvedora);
    printf("%s ", j[k].publisher);
    printf("%s ", j[k].genero);
    printf("%i/%i/%i", j[k].dia, j[k].mes, j[k].anos);
  };
};

void popularVetor(){
  strcpy(j[0].nome, "Stray");
  strcpy(j[0].desenvolvedora, "Indie");
  strcpy(j[0].publisher, "Annapurna");
  strcpy(j[0].genero, "Aventura/Plataforma");
  j[0].preco = 69.90;
}

struct Jogos j[10];
int i = 1;

int main() {
  popularVetor();
  int op;
  while(1 == 1){
    boasVindas();
    scanf("%d", &op);
    if(op == 1){
      cadastrarJogo();
    }
    if(op == 2){

    }
  }
};
