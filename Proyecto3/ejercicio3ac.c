/* Ejercicio 3 c*/
#include <stdio.h>

int main (void) {
int x,y;
  
printf("Ingrese dos valores\n");
scanf("%d" , &x);
scanf("%d", &y);
  y=y+y;
  x=x+y;
printf("El valor de x es: %d\n", x);
printf("El valor de y es; %d\n", y);
  return 0;
}

/*programa      |usuario ingresa un σ0 |produce una salida σ
1.a ejecucion1  |           2,5          |    x=12,y=10
1.a ejecucion2  |          -5,12         |    x=19,y=24
1.a ejecucion3  |           0,26         |    x=52,y=52
*/
