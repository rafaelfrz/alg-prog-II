//Ler 2 variáveis (x,y), criar função para trocar valores de x e y

#include <iostream>
#include <string>
using namespace std;

void Troca(float *x, float *y) {
  float aux;
  aux = *x;
  *x = *y;
  *y = aux;
};

int main() {
  float *p;
  float *p2;
  float x;
  float y;

  cout << "Digite o valor de X: ";
  cin >> x;
  cout << "Digite o valor de Y: ";
  cin >> y;

  p = &x;
  p2 = &y;

  Troca(p, p2);

  cout << *p << " " << *p2;
};
