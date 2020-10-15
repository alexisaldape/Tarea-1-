#include <stdio.h>
int main(){
    int elementos_maximos = 10;
    int matriz[10][10],matriz_2[10][10], sum_matriz[10][10];
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
    printf("Matriz 1: \n");
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        printf("%d, ", matriz[indice_y][indice_x]);
      }
      
      printf("!!!!!!\n");
    }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        matriz_2[indice_y][indice_x] = indice_x+indice_y;
      }
    }
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        matriz_2[indice_y][indice_x] = matriz_2[indice_y][indice_x]*6;
      }
    }
    printf("Matriz 2: \n");
    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
        printf("%d, ", matriz_2[indice_y][indice_x]);
      }
      
      printf("!!!!!!\n");
    }
    printf ("\nLa suma de las matrices es:\n ");
    
   for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
      for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
      	sum_matriz[indice_y][indice_x] = matriz[indice_y][indice_x]+matriz_2[indice_y][indice_x];
      	printf ("%d, ", sum_matriz[indice_y][indice_x]);
      }
      
      printf("!!!!!!\n");
    }
    return 0;
}
