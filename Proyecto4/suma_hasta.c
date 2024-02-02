#include <stdio.h>

int suma_hasta (int N) {
int i,sum ;
  i=0;
  sum=0;
  while (i<=N){
    sum += i;
    i ++;
  }
   return sum;
}

int pedirEntero () {
  int x;
  printf("Ingrese un numero\n");
  scanf("%d",&x);
  return x;

  
}

int main(void) {
int x;
  x=pedirEntero();

  if (x<0){
    printf("Error, es negativo\n");
  }
  else{
    printf("La suma es : %d\n", suma_hasta (x));
  }
  return 0;
}