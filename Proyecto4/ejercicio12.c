#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe(struct asoc a[], int tam, clave_t c) {
    for (int i = 0; i < tam; i++) {
        if (a[i].clave == c) {
            return true;
        }
    }
    return false;
}

void pedirAsociaciones(struct asoc a[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Ingrese la clave para el elemento %d: ", i );
        scanf(" %c", &a[i].clave);
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", &a[i].valor);
    }
}

int main(void) {
    const int tam = 4;
    struct asoc arreglo[tam];
    pedirAsociaciones(arreglo, tam);

    printf("Ingrese una clave: ");
    clave_t clave;
    scanf(" %c", &clave);

    bool existe = asoc_existe(arreglo, tam, clave);
    if (existe) {
        printf("La clave %c existe en el arreglo de asociaciones.\n", clave);
    } else {
        printf("La clave %c no existe en el arreglo de asociaciones.\n", clave);
    }

    return 0;
}
