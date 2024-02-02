#include <stdio.h>

int main(void) {
  int x,y,z,m;
  printf("Ingrese 5 valores\n");
  scanf("%d %d %d %d", &x,&y,&z,&m);
  if(x<y){
  m=x;
    }
    else{
      m=y;
    }

    if(m<z){
    
    }
    else{
    m=z;
    }

  printf("El valor de x es:%d\n",x);
  printf("El valor de y es:%d\n",y);
  printf("El valor de z es:%d\n",z);
  printf("El valor de m es:%d\n",m);
  return 0;
  
}