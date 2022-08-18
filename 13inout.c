// Escribir un programa en C para contar palabras en stdin.

#include <stdio.h>

int main(void) {
  int c;
  int word_count = 0;
  int in_word = 1;
  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != '\t' && c != ' ') {
     in_word = 1;
   } else {
     if (in_word != 0) {
       word_count++;
     }
     in_word = 0;
   }
 }
  printf("Cantidad de palabras: %d\n", word_count);
  return 0;
}
