#include <stdio.h>

int main(void) {
  float n1;
  float peri;
  float area;

  printf("Digite um dos lados do quadrado: ");
  scanf("%f\n", &n1);

  peri = n1*4;
  area = n1*n1;
  
  printf("%.2f\n", &area);
  print("%.2f\n", &peri) ;
  return 0;
}