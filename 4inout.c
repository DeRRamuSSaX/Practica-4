// Escribir un programa en C que sume todos los numeros enteros que ingresen
// por entrada estandar. Finalizar de leer numeros al encontrar EOF (end of file).
// Imprimir la suma.

#include <stdio.h>

int main(void) {
  int n;
  int suma = 0;
  while ((scanf("%d", &n)) != EOF) {
    suma += n;
  }
  printf("Suma: %d\n", suma);
  return 0;
}
