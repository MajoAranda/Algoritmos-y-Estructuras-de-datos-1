#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int pedirEntero(void) 
{
  int x;
  printf("Ingresar un numero: ");
  scanf("%d", &x);
  return x;
}


int primo(int n) 
{
  int res = 1;
  int i = 2;
  if(n < 2) 
    res = 0;
  while(i < n && res)
  {
    res = res && (n % i != 0 );
    i = i + 1;
  }
  return res;
}

int nesimo_primo(int n)
{
  int i, cont;
  const int N = 1;
  i = 2;
  cont = N;
  
  while(cont < n)
  {
    i++; 
    if(primo(i))
    {
      cont++;
    }
  }
  return i;
}

int main(void)
{
  int x;
  x = pedirEntero();

  // b
  while(x < 0)
  {
    printf("Ingrese un numero mayor o igual a 0\n");
    x = pedirEntero();
  }

  // a
  assert(x >= 0);
  printf("El n-esimo primo es %d\n", nesimo_primo(x));

  return 0;
}


