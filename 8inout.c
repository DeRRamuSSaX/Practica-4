// Escribir un programa que elija al azar un numero entre uno y mil.
// Pedir al usuario que ingrese un numero intentando adivinar.
// Indicar si el numero correcto es menor o mayor al numero ingresado.
// Darle al usuario un numero limitado de preguntas, cinco por ejemplo.
// ¿Cuantas preguntas necesita el usuario para poder adivinar siempre el numero?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int num = (rand() % 100) + 1;
  int res;
  for (int i = 0; i < 5; i++) {
    printf("Ingresa un numero entre uno y cien:\n");
    scanf("%d", &res);
    if (res == num) {
      printf("Ganaste! Toma una Galletita :)\n");
      return 0;
    } else if (res > num) {
      printf("Mas Bajo!\n");
    } else if (res < num) {
      printf("Mas Alto!\n");
    }
  }
  printf("Muchos intentos. Perdiste...\n");
  return 0;
}
