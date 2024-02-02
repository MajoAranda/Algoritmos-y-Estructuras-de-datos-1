#include <stdio.h>

void pedirArreglo (int a[], int tam){
for(int i = 0 ; i < tam; i++){
  printf("Ingrese el elemento en la posicion %d :" ,i);
  scanf("%d",&a[i]);
} 
}

void imprimeArreglo(int a[], int n_max){
  for(int i = 0; i<n_max; i++){
    printf("Los valores del arreglo son: %d\n", a[i]);
  }
}

void intercambiar (int a[], int tam, int i, int j){
int aux;
  aux = a [i];
  a [i] = a [j];
  a [j] = aux;
  
}
int main(void) {
  int tam,i,j;
  printf("Ingrese un tamaño : ");
  scanf("%d", &tam);
  int arr[tam];
  printf("Ingrese los índices que quiere intercambiar %d, %d\n", i,j);
  scanf("%d" "%d", &i,&j);
  pedirArreglo (arr,tam);
  intercambiar (arr,tam,i,j);
  imprimeArreglo (arr,tam);
  return 0;
}