#include <stdio.h>

int main() {
    // 1. LA MATRIZ (2 FILAS y 3 COLUMNAS)
    // ATENCIÓN: En el examen, cambiá las dimensiones [2][3] y los valores si piden otra cosa.
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 2. RECORRIDO DE LA MATRIZ
    printf("Imprimiendo la matriz fila por fila:\n");
    
    // El primer 'for' (con 'i') SIEMPRE recorre las FILAS.
    // ATENCIÓN: El límite 'i < 2' tiene que coincidir con tu cantidad de filas.
    for (int i = 0; i < 2; i++) {
        
        // El segundo 'for' (con 'j') SIEMPRE recorre las COLUMNAS.
        // ATENCIÓN: El límite 'j < 3' tiene que coincidir con tu cantidad de columnas.
        for (int j = 0; j < 3; j++) {
            
            // Imprime el valor actual dejando un espacio
            printf("%d ", matriz[i][j]); 
        }
        
        // Al terminar una fila, hacemos un salto de línea para que quede prolijo
        printf("\n"); 
    }

    return 0;
}