// Escribir un programa en C para conectar a la salida de curl -v.
// El programa tiene que extraer el codigo y mensaje de estado de una
// respuesta HTTP, como por ejemplo, 200 OK.

#include <stdio.h>
#define MAXLINE 100

int main(int argc, char const *argv[]) {
  char buffer[MAXLINE];
  int http_codes[5] = {200, 201, 307, 404, 500};
  char *http_messages[] = {
    "OK",
    "Created",
    "Temporary Redirect",
    "Not Found",
    "Internal Server Error"
  };
  while (fgets(buffer, MAXLINE, stdin) != NULL) {
    if (buffer[0] == '<') {
      char c;
      char protocol[10];
      int code;
      char message[50];
      sscanf(buffer, "< %s %d %s", &c, protocol, &code, message);
      int i = 0;
      while (i < 5) {
        if (code == http_codes[i]) {
          break;
        }
        i++;
      }
      printf("%d %s\n", code, http_messages);
    }
  }
  return 0;
}
