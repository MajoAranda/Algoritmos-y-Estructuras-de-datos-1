/*6b */
#include <stdio.h>

int pedirEntero(void){
  int x;
  printf("Ingrese un número entero\n");
  scanf("%d",&x);
  return x;
}

void imprimeEntero(int x){
  printf("El número ingresado es %d\n",x);
}


int minimo (int x, int y, int z){
int m;
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

  return m;
  
}
  

int main(void) {
  int x,y,z,m;
  
  x=pedirEntero();
  y=pedirEntero();
  z=pedirEntero();
  m=pedirEntero();

  m=minimo(x,y,x);
  imprimeEntero(m);
  
  return 0;
  
}
