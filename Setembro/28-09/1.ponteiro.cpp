#include <iostream>
using namespace std;

int main() {
  
};

void somap (int x, int y, int *r) {
  int res = x + y;
  r = &res;
};

int soma (int *x, int *y) {
  int res = *x + *y;
  return res;
};
