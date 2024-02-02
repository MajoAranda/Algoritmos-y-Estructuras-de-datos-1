#include <stdio.h>

void pedirArreglo (int a[],int n_max){
  for(int i = 0; i<n_max;i++){
    printf("Ingrese el elemento %d \n",i);
    scanf("%d",&a[i]);
  }
}



  int sumatoria(int a[], int tam){
    int suma = 0;
    for(int i = 0; i<tam;i++){
      suma += a[i];
    }
     return suma; 
 }




int main (void) {
const int n = 4;
int arreglo[n];
pedirArreglo (arreglo,n);

printf("la suma es %d", sumatoria (arreglo, n));
  return 0;
}
