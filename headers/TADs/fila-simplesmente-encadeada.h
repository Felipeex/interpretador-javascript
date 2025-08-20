#include <stdio.h>
#include <stdlib.h>
#include "./string-dinamica.h"

struct filaSimplesmente {
  strDin string;
  struct filaSimplesmente * prox;
}; typedef struct filaSimplesmente filaSimplesmente;

void initFilaSimplesmete (filaSimplesmente ** fila);

void initFilaSimplesmete (filaSimplesmente ** fila) {
  *fila = NULL;
}
