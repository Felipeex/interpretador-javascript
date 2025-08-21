#include <stdio.h>
#include <stdlib.h>
#include "./string-dinamica.h"

struct filaSimplesmente {
  strDin string;
  struct filaSimplesmente * prox;
}; typedef struct filaSimplesmente FilaSimplesmente;

void initFilaSimplesmete (FilaSimplesmente ** fila);

void initFilaSimplesmete (FilaSimplesmente ** fila) {
  *fila = NULL;
}
