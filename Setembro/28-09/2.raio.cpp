#include <iostream>
#include <string>
using namespace std;

struct Circulo {
  float area;
  float raio;
  float *pont;
};

void calc (float x, float *res) {
  const float pi = 3.14;
  *res = pi * (x * x);
};

int main() {
  Circulo circulo;

  cout << "Insira o raio: ";
  cin >> circulo.raio;

  circulo.pont = &circulo.area;

  calc(circulo.raio, circulo.pont);

  cout << "Área: " << circulo.area;
};
