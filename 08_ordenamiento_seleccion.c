#include <stdio.h>

int main() {
    int datos[5] = {64, 25, 12, 22, 11};
    int aux, minimo;

    // ALGORITMO POR SELECCIÓN
    for (int i = 0; i < 5 - 1; i++) {
        minimo = i; // Suponemos que el primero es el más chico
        
        // Buscamos si hay uno más chico en el resto del arreglo
        for (int j = i + 1; j < 5; j++) {
            
            // ATENCIÓN EXAMEN: 
            // Si tiene '<', ordena de MENOR a MAYOR.
            // Si te piden de MAYOR a MENOR, cambiá ese '<' por un '>'.
            if (datos[j] < datos[minimo]) {
                minimo = j;
            }
        }
        
        // Intercambiamos el más chico que encontramos con el de la posición actual
        if (minimo != i) {
            aux = datos[i];
            datos[i] = datos[minimo];
            datos[minimo] = aux;
        }
    }

    printf("Arreglo ordenado por seleccion: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", datos[i]);
    }

    return 0;
}