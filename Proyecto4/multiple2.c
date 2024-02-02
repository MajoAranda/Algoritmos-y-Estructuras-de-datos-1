/* {Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}*/


#include <stdio.h>

int pedirEntero (void) {
  int n;
printf("Ingrese un numero \n",n);
  scanf("%d",&n);

  return n;
}


int main(void) {
int x,y,z,xaux,yaux,zaux;
  
  x=pedirEntero ();
  y=pedirEntero ();
  z=pedirEntero ();

  xaux=x;
  yaux=y;
  zaux=z;

  x= yaux;
  y= xaux + yaux+ zaux ;
  z = yaux + xaux ; 

  printf(" x = %d , y =  %d , z = %d \n", x ,y , z) ;
  
  
  return 0;
}