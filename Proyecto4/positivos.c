#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void pedirArreglo (int a[],int n_max){
  for(int i = 0; i<n_max;i++){
    printf("Ingrese el elemento %d \n",i);
    scanf("%d",&a[i]);
  }
}

bool existe_positivo(int a[], int tam){
  bool resultado = false;
  for( int i = 0; i < tam ; i++){
    resultado = resultado || (a[i]>0);
    }
  
  return resultado;
}

bool todos_positivos(int a[], int tam){
  bool resultado = true;
 for( int i = 0; i < tam ; i++){
    resultado = resultado && (a[i]>0);
    }
  
  return resultado;
}

int main (void) {
const int n = 4;
int arreglo[n];
int x;
pedirArreglo (arreglo,n);
printf("Ingrese 1 si quiere ejecutar existe_positivo, ingrese 2 si quiere ejecutar todos_positivos \n");
scanf("%d",&x);
 assert (x==1 || x==2 ) ;
  if(x==1){
   printf("%s", existe_positivo (arreglo,n) ? "true" : "false");
    
  }

  if(x==2){
    printf("%s",todos_positivos (arreglo,n) ? "true" : "false");
  }
  return 0;
}
 