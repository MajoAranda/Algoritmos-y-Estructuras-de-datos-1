/* Ejercicio 5b 1 */
#include <stdio.h>

int main(void) {
  int x,y,i;
  i=0;
  printf("Ingrese un valor para x\n");
  scanf("%d", &x);
  printf("Ingrese un valor para y\n");
  scanf("%d", &y);
  
  while(x>=y) {
    x=x-y;
    i=i+1;
    printf("El valor de x es:%d y el valor de i es:%d\n",x,i);
    
    
  }
printf("Los valores finales son x=%d , y=%d , i=%d",x,y,i);
  return 0;
 }

/*
primera iteración: x=10 i=1
segunda iteración: x=7 i=2
tercera iteración: x=4 i=3
cuarta iteración:  x=1 i=4
*/