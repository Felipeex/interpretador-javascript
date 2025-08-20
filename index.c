#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef WIN32
    #include <windows.h>
    #define sleep(x) Sleep(x * 1000);

    #include "./headers/conio/conio-dos.h"
    #include "./headers/conio/meuconio.h"
#else
    // #include "./headers/conio/conio-unix.h"
#endif

#include "./headers/conio/cores.h"
#include "./headers/TADs/string-dinamica.h"

int main() {
  // FILE * ponteiroJS = fopen("./programa.js", "r");
  strDin * string;
  init(&string);
  inserirLetra(&string, 'L');
  inserirLetra(&string, 'U');
  inserirLetra(&string, 'C');
  inserirLetra(&string, 'A');
  inserirLetra(&string, 'S');
  exibeString(string);
}


