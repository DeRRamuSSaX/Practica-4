// Escribir un programa en C que reciba un argumento entero n y
// acepte n enteros por entrada estandar. Al terminar de leer los numeros, imprimir su suma.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int sum = 0;
  int a;
  int i = 0;
  while (i < n) {
    scanf("%d", &a);
    sum += a;
    i++;
  }
  printf("Suma: %d\n", sum);
  return 0;
}
