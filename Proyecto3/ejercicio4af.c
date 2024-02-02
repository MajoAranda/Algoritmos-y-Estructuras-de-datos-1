/* Ejercicio 4 */
#include <stdio.h>

int main(void) {
  int x,y;
  printf("Inserte 2 valores\n");
  scanf("%d %d" , &x, &y);
     if (x>=y) {
     x=0; 
  }
     else {
       x=2;
     }
  printf("El valor de x es:%d\n",x);
  return 0;
}