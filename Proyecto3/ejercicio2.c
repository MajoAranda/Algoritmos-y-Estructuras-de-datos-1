/* Ejercicio 2*/
#include <stdio.h>

int main(void) {
  int x,y,z,b,w;
printf("Ingrese 5 valores x\n");
scanf("%d %d %d %d %d",&x,&y,&z,&b,&w);

  printf("(x%%4==0) = %d\n", x%4==0);
  printf("(x + y == 0) && ((y - x) == (-1) * z) = %d\n", (x + y ==0) && ((y - x) == (-1) * z));
  printf("not b && w = %d\n", !b && w);

  
  return 0;
}