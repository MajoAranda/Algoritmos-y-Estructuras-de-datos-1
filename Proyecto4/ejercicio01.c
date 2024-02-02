/* ejercicio01 */
#include <stdio.h>
#include <assert.h>

void Holahasta (int n) {
while (n>0){
  printf("Hola\n");
  n--;
}
}

int pedirEntero (void) {
  int m;
  printf ("Ingrese un numero\n");
  scanf ("%d", &m);
  assert (m>0);
  return m;
}

int main(void) {
  int n = pedirEntero ();
  Holahasta (n);
  return 0;
}