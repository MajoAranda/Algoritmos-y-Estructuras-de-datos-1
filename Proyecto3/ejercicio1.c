/* ejercicio 1 */

#include <stdio.h>

int main(void)
 {
   int x,y,z;
   printf("Ingrese 3 numeros\n");
   scanf("%d", &x);
   scanf("%d", &y);
   scanf("%d", &z);
   
   printf("x+y+1=%d\n" , x+y+1);
   printf("z*z+y*45-15*x=%d\n", z*z+y*45-15*x);
   printf("y-2 == (x*3+1) %% 5=%d\n", y-2 == (x*3+1) % 5);
   printf("y/2*x=%d\n" , y / 2 * x);
   printf("y<x*z=%d\n" , y<x*z);
   
   return 0;
}


/* Expresion             |(x→7, y→3, z→5)  |(x→1, y→10, z→8)
z * z + y * 45 - 15 * x  |        55       |     499
y - 2 == (x * 3 + 1) % 5 |         0       |      0
y / 2 * x                |         7       |      5
y < x *z                 |         1       |      0   
x + y + 1                |        11       |     12               */