#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int x,i;
  i = 2;
  bool res;
  res = true;
printf("Ingrese un valor para x\n");
scanf("%d",&x);

  while(i < x && res){
    res = res && ( x % 2 != 0);
    i=i+1;
    printf("El valor de x es:%d, el valor de i es:%d y el valor de res es:%d\n",x,i,res);
    }

  return 0;
}

/* 
primera iteración: x=5 i=3 res=1
segunda iteración: x=5 i=4 res=1
tercera iteración: x=5 i=5 res=1

El primer ciclo calcula el resto entre x e y guardandolo en la variable x
El segundo ciclo calcula si un número es primo, devuelve un booleano guardado en la variable res
*/