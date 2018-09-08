#include <stdio.h>
#include <stdlib.h>

int main() {

  int asientos[5][5];
  int opcion;
  int fila;
  int asiento;
  float filPr=5, filUl=2.5, medio=3.5;
  float ganancias=0;
  printf("Menu\n");
printf("1.vender asientos\n");
printf("2.Ver ganancias actuales\n");
scanf("%d", &opcion);
  do {


    switch (opcion) {
      case 1:
          
      printf("Escoja una fila: 1, 2, 3, 4 o 5\n");
      scanf("%d", &fila);
      printf("Escoja un asiento: 1, 2, 3, 4 o 5\n");
      scanf("%d", &asiento);
      switch (fila) {
          case 1:
              if (asientos[fila-1][asiento-1]!=1) {
                  asientos[fila-1][asiento-1]=1;
                  ganancias=ganancias+filPr;
               }else{
                  printf("Asiento ocupado\n");
               }
          break;
          case 2:
              if (asientos[fila-1][asiento-1]!=1) {
                  asientos[fila-1][asiento-1]=1;
                  ganancias=ganancias+medio;
               }else{
                  printf("Asiento ocupado\n");
               }
          break;
          case 3:
              if (asientos[fila-1][asiento-1]!=1) {
                  asientos[fila-1][asiento-1]=1;
                  ganancias=ganancias+medio;
               }else{
                  printf("Asiento ocupado\n");
               }
          break;
          case 4:
              if (asientos[fila-1][asiento-1]!=1) {
                  asientos[fila-1][asiento-1]=1;
                  ganancias=ganancias+medio;
               }else{
                  printf("Asiento ocupado\n");
               }
          break;
          case 5:
              if (asientos[fila-1][asiento-1]!=1) {
                  asientos[fila-1][asiento-1]=1;
                  ganancias=ganancias+filUl;
               }else{
                  printf("Asiento ocupado\n");
               }
          break;
        }
      break;
      case 2:
      printf("ganacias hasta el momento %f \n", ganancias);
      break;
    }
    printf("Menu\n");
printf("1.vender asientos\n");
printf("2.Ver ganancias actuales\n");
scanf("%d", &opcion);
  } while(opcion>=1 && opcion<=2);

  return 0;
}

