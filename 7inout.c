// Escribir un programa que envıe a salida estandar una cantidad n de numeros
// aleatorios entre a y b. Ingresar los parametros n, a y b como
// argumentos de lınea de comandos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int n = atoi(argv[3]);
  int i = 0;
  int r;
  while (i < n) {
    r = a + (rand() % b);
    printf("%d ", r);
    i++;
  }
  printf("\n");
  return 0;
}
