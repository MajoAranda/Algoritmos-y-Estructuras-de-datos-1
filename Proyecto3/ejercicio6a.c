/*6a entradas.c*/
#include <stdio.h>

int pedirEntero(void){
  int x;
  printf("Ingrese un número entero\n");
  scanf("%d",&x);
  return x;
}


void imprimeEntero(int x){
  printf("El número ingresado es %d\n",x);
}

int main(void) {
  int y = pedirEntero();
  imprimeEntero(y);
  return 0;
}