// Escribir un programa en C que cuente la cantidad de caracteres ingresados
// por entrada estandar.

#include <stdio.h>

int main(void) {
  int c;
  int char_count = 0;
  while ((c = getchar()) != EOF) {
    char_count++;
  }
  printf("Cant. de Caracteres: %d\n", char_count);
  return 0;
}
