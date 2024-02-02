#include <stdio.h>
#include <assert.h>


struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y){
  struct div_t resultado;
  resultado.cociente = x/y;
  resultado.resto= x%y;
  return resultado;
}




int main(void) {
  int x,y;
  printf("Ingrese un numero\n");
  scanf("%d",&x);
  printf("Ingrese un divisor\n");
  scanf("%d",&y);
  assert (y!=0);

  struct div_t resultado = division (x,y);
  
  printf("El cociente es %d y el resto es %d\n",resultado.cociente,resultado.resto);
  
  return 0;
}