#include <stdio.h>
int main(){
    int elementos_maximos = 10;
    int matriz[10][10];
    int indice_x;
    int indice_y;
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        matriz[indice_y][indice_x] = indice_x+indice_y;
      }
    }
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        matriz[indice_y][indice_x] = matriz[indice_y][indice_x]*4;
      }
    }
    printf("Valores multiplicados: \n");
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        printf("%d, ", matriz[indice_y][indice_x]);
      }
      printf("!!!!!!\n");
    }
    return 0;
}
 
