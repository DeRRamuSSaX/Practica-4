// Escribir un programa en C que reciba dos argumentos enteros a y b.
// El programa lee por entrada estandar un numero arbitrario de enteros e imprime
// los que estan entre a y b, es decir en el intervalo [a, b].

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int n;
  if (a > b) {
    printf("'a' tiene que ser mayor que 'b'\n");
    return 0;
  }
  while (a < b) {
    scanf("%d", &n);
    if (n >= a && n <= b) {
      printf("%d ", n);
    }
    printf("\n");
  }
  return 0;
}
