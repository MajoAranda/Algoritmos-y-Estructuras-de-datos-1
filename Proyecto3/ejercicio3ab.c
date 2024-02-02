/* Ejercicio 3 b*/
#include <stdio.h>

int main (void) {
int x,y;
  
printf("Ingrese dos valores\n");
scanf("%d" , &x);
scanf("%d", &y);
  x=x+y;
  y=y+y;
printf("El valor de x es: %d\n", x);
printf("El valor de y es; %d\n", y);
  return 0;
}

/*programa      |usuario ingresa un σ0 |produce una salida σ
1.a ejecucion1  |           2,5          |    x=7,y=10
1.a ejecucion2  |          -5,12         |    x=7,y=24
1.a ejecucion3  |           0,26         |    x=26,y=52
*/
