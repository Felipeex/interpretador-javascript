#include <stdio.h>
#include <stdlib.h>
#include "./fila-simplesmente-encadeada.h"

struct listaDuplamente {
  FilaSimplesmente * ponteiroToken;
  struct listaDuplamente * proximo, * anterior;
}; typedef struct listaDuplamente ListaDuplamente;

void initListaDuplamente (ListaDuplamente ** lista);

void initListaDuplamente (ListaDuplamente ** lista) {
  *lista = NULL;
}

