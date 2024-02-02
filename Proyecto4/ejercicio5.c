#include <stdio.h>

void pedirArreglo(int a[], int n_max){
for(int i = 0 ; i<n_max ; i++){
printf("Ingrese el elemento %d\n", i);
  scanf("%d",&a[i]);
  
}
}

void imprimeArreglo(int a[], int n_max){
  for(int i = 0; i<n_max; i++){
    printf("Los valores del arreglo son %d\n", a[i]);
  }
}
int main (void) {
  int n;
  printf("Ingrese el tamaño del arreglo\n");
  scanf("%d",&n);
  int arreglo[n];
  pedirArreglo (arreglo,n);
  imprimeArreglo (arreglo,n);
  return 0;
}