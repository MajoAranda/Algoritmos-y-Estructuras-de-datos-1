#include <stdio.h>
#include <limits.h>

void pedirArreglo (int a[], int tam){
  int x = INT_MAX;
for(int i = 0; i < tam ; i ++ ){
  printf("Ingrese el elemento en la posición %d del arreglo: " , i);
  scanf("%d",&a[i]);
}
}

int minimo_pares (int a[], int tam){
  int x = INT_MAX;
  for(int i = 0 ; i < tam ; i ++){
      if (a[i] < x && a[i] % 2 == 0){
        x=a[i];
      }
  
  }
  return x;
}


int minimo_impares (int a[], int tam){
  int x = INT_MAX;
  for(int i = 0 ; i < tam ; i ++){
      if (a[i] < x && a[i] % 2 != 0){
        x=a[i];
      }
    
  }
  return x;
}



int main(void) {
  const int tam = 4;
  int arreglo[tam];
  pedirArreglo (arreglo,tam);
  printf(" El mínimo par es %d \n",minimo_pares(arreglo,tam));
  printf(" El mínimo impar es %d",minimo_impares(arreglo,tam));

  return 0;
}