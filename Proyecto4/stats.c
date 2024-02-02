#include <stdio.h>

void pedirArreglo (float a[], int tam){
  for(int i = 0; i<tam; i++){
    printf("Ingrese un elemento: " );
    scanf("%f",&a[i]);
  }
}

struct datos_t {
float maximo;
float minimo;
float promedio;};


struct datos_t stats(float a[], int tam){
struct datos_t resultado;
  resultado.maximo = a[0];
  resultado.minimo= a[0];
  resultado.promedio = 0;

for (int i = 0; i<tam; i++){

  if( a[i] < resultado.minimo){
    resultado.minimo = a[i];
  }

   if( a[i] > resultado.maximo){
    resultado.maximo = a[i];
  }

  resultado.promedio += a [i];
}
  resultado.promedio /= tam;
  return resultado;
}



int main(void) {
  int const tam = 4 ; 
  float a[tam];
  pedirArreglo (a,tam);
  
  struct datos_t resultado = stats(a, tam);

    printf("El mínimo es: %f\n", resultado.minimo);
    printf("El máximo es: %f\n", resultado.maximo);
    printf("El promedio es: %f\n", resultado.promedio);
  return 0;
}