#include <stdio.h>

struct comp_t {
int menores;
int iguales;
int mayores;
};

struct comp_t cuantos(int a[], int tam, int elem){
  struct comp_t resultado = {0,0,0};
for(int i = 0; i<tam;i++){
  if(a[i] < elem){
    resultado.menores++;
  }
  if(a[i] > elem){
    resultado.mayores++;
  }

  if(a[i] == elem){
    resultado.iguales++;
  }
}
  return resultado;
}


void pedirArreglo (int a[],int tam){
  for (int i = 0 ; i < tam; i++){
    printf("Ingrese el elemento en la posición %d : ", i);
    scanf("%d",&a[i]);
  }
}


int main(void) {
  int const tam = 4;
  int x;
  printf("Ingrese un numero ");
  scanf("%d",&x);
  int arreglo[tam];
  pedirArreglo (arreglo, tam);
  struct comp_t resultado = cuantos (arreglo, tam, x);
  printf("Los mayores son %d : \n", resultado.mayores);
  printf("Los iguales son %d : \n", resultado.iguales);
  printf("Los menores son %d : \n", resultado.menores);
  return 0;
}