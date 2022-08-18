// Escribir un programa en C que cuente la cantidad de lıneas en stdin.

#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  int line_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line_count++;
    }
  }
  printf("Cantidad de lineas: %d\n", line_count);
  return 0;
}
