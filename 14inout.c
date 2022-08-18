// Escribir un programa en C que imprima un menu con cinco opciones y una sexta
// para salir del programa. El programa imprime el menu y espera la entrada
// del usuario para elegir una de las seis opciones, imprime algo distinto
// segun la opcion y repite el menu.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int num = 0;
  while (1) {
    printf("Hola, soy el asistente de C, que necesitas?\n");
    printf("(1) Ayuda a programar.\n");
    printf("(2) Una guia de c.\n");
    printf("(3) Una pagina para subir mis BD.\n");
    printf("(4) Necesito un momento a solas.\n");
    printf("(5) Solo necesito que te vayas a la *****.\n");
    printf("(6) Salir del Asistente.\n");
    scanf("%d", &num);
    switch (num) {
      case 1:
      printf("Soy el asistente, literalmente te puedo autocompletar tu codigo.\n");
      case 2:
      printf("Te recomiendo que explores este link: tinyurl.com/material-la35\n");
      case 3:
      printf("Te recomiendo que explores este link: mongodb o tal vez heroku.com\n");
      case 4:
      printf("Entendido, vuelve a abrir el menu si necesitas algo.\n");
      return 0;
      case 5:
      printf("-----ERROR-----\n");
      printf("pelotudo detectado\n");
      return 0;
      case 6:
      printf("Entendido, saliendo del menu.\n");
      return 0;
      default:
      printf("Lo siento, esa opcion no existe, es del (1) al (6).\n");
      return 0;
    }
  }
  return 0;
}
