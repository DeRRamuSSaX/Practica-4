// Escribir un programa que acepte dos argumentos, el nombre de un archivo y un
// entero n. Cifrar el contenido del archivo especificado como primer argumento
// usando un cifrado por desplazamiento, siendo la cantidad de desplazamiento n.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char *buffer[] = "";
  char line[250];
  char *filename = argv[1];
  int shift = atoi(argv[2]);
  FILE *fp;
  FILE *temp_file;
  fp = fopen(filename, "r");
  while (fgets(line, 250, fp) != NULL) {
    // strcat(line, '\n');
    // strcpy(buffer,line);
    fprintf(temp_file, "%s", line);
    // printf("%s\n", line);
  }
  fclose(fp);
  fclose(temp_file);
  temp_file = fopen("temp.txt", "r");
  // printf("%s", buffer);
  fp = fopen(filename, 'w');
  while (fgets(line, 250, temp_file) != NULL) {
    //ciframos
    for (int i = 0; i < 250; i++) {

      // if (line[i] != ' ' && line[i] != '\n') {
      //   line[i] = (((line[i] - 'a') + shift) % 26) + 'a';
      //
      // }
    }
    fprintf(temp_file, "%s", line);
    // printf("%s\n", line);
  }
  return 0;
}
  return 0;
}
