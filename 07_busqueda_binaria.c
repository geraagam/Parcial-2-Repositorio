#include <stdio.h>

int main() {
    // ATENCIÓN: Para usar Búsqueda Binaria, los números DEBEN estar ordenados.
    int datos[7] = {2, 5, 8, 12, 16, 23, 38};
    int buscado = 16;
    
    int inicio = 0;
    int fin = 7 - 1; // El tamaño del arreglo menos 1
    int medio;
    int posicion = -1;

    // ALGORITMO DE BÚSQUEDA BINARIA
    while (inicio <= fin) {
        medio = inicio + (fin - inicio) / 2;

        if (datos[medio] == buscado) {
            posicion = medio; // ¡Lo encontró!
            break;
        }
        
        if (datos[medio] < buscado) {
            inicio = medio + 1; // Busca en la mitad derecha
        } else {
            fin = medio - 1; // Busca en la mitad izquierda
        }
    }

    if (posicion != -1) {
        printf("Encontrado en la posicion: %d\n", posicion);
    } else {
        printf("No encontrado.\n");
    }

    return 0;
}