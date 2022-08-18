// Escribir un programa que lea un archivo por entrada estandar con un formato
// predefinido que consiste en nombre nota_1 nota_2 d ́onde nombre es un string y
// nota_1 y nota_2 son enteros. Tabular por salida estandar los datos que
// ingresan agregando una cuarta columna con el promedio de las dos notas.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  //alumnos
  char alumno_A = argv[1];
  char alumno_B = argv[2];
  char alumno_C = argv[3];
  //notas
  int nota1A;
  int nota2A;
  int nota1B;
  int nota2B;
  int nota1C;
  int nota2C;
  //promedios
  double notas1 = (nota1A + nota2A) / 2;
  double notas2 = (nota1B + nota2B) / 2;
  double notas3 = (nota1C + nota2C) / 2;
  //prints
  printf("Introducir las notas del alumno %s\n", alumno_A);
  scanf("%d %d", &nota1A, &nota2A);
  printf("Introducir las notas del alumno %s\n", alumno_B);
  scanf("%d %d", &nota2A, &nota2B);
  printf("Introducir las notas del alumno %s\n", alumno_C);
  scanf("%d %d", &nota1C, &nota2C);
  //resultado
  printf("Nombre     Nota1     Nota2     Promedio\n");
  printf("%s         %d        %d          %.1f\n", alumno_A, nota1A, nota2A, notas1);
  printf("%s         %d        %d          %.1f\n", alumno_B, nota1B, nota2B, notas2);
  printf("%s         %d        %d          %.1f\n", alumno_C, nota1C, nota2C, notas3);
  return 0;
}
