#include <stdio.h>
#include <stdlib.h>

struct stringDinamica {
  char letra;
  struct stringDinamica * prox;
}; typedef struct stringDinamica strDin;

void init(strDin ** str);

void init(strDin ** str) {
  *str = NULL;
}

void inserirLetra(strDin ** string, char letra) {
  strDin * aux, *nova;
  nova = (strDin*)malloc(sizeof(strDin));
  nova->letra = letra;
  nova->prox = NULL;

  if(* string == NULL) {
    *string = nova;
  } else {
    aux = *string;
    while (aux->prox != NULL) 
      aux = aux->prox;
    aux->prox = nova;
  }
}