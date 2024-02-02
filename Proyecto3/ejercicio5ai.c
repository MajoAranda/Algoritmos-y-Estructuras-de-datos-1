/*Ejercicio 5 1i */
#include <stdio.h>

int main(void) {
  int i ;
  printf("Ingrese un número\n");
  scanf("%d" , &i);
  while(i!=0){
    i=0;
     printf("i=%d\n",i);
  }
  printf("El valor final de i es:%d\n",i);
  return 0;
}