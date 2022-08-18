// Escribir un programa en C que lea un numero n entero por entrada estandar.
// Leer una lınea con n enteros a continuacion. Al terminar de leer los numeros,
// imprimir su suma.

#include <stdio.h>

int main(void) {
  int n, m;
  int i = 0;
  int suma = 0;
  scanf("%d", &n);
  while (i < n) {
    scanf("%d", &m);
    suma += m;
    i++;
  }
  printf("Suma: %d\n", suma);
  return 0;
}
