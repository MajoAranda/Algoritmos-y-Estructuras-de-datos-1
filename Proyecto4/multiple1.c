/* {Pre: x = X, y = Y}
   x := x + 1
   y := x + y
   {Post: x = X + 1, y = X + Y} */

#include <stdio.h>

int pedirEntero(void) 
{
  int x;
  printf("Ingrese un numero\n");
  scanf("%d", &x);
  return x;
}


int main(void) {
  int x;
  int y;

  x = pedirEntero ();
  y = pedirEntero ();

  x = x + 1;
  y = x + y;

  printf("El valor de x es %d, y el de y es %d", x,y);
  
  
  return 0;
}