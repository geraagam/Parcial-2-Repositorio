#include <stdio.h>

int main() {
    // 1. EL ARREGLO A ORDENAR
    // ATENCIÓN: En el examen, cambiá el nombre "datos", el tamaño "5" y los números.
    int datos[5] = {8, 3, 1, 9, 2}; 
    int aux; // Esta variable es obligatoria, sirve como "vaso vacío" para intercambiar valores.

    // 2. EL ALGORITMO BURBUJA (Copiar y pegar tal cual, solo cambiar la variable "datos")
    // El primer ciclo for da la cantidad de "vueltas" necesarias.
    for (int i = 0; i < 5 - 1; i++) {
        
        // El segundo ciclo for va comparando de a pares.
        for (int j = 0; j < 5 - i - 1; j++) {
            
            // ¡EL PUNTO CLAVE DEL EXAMEN!
            // Si tiene '>', ordena de MENOR A MAYOR.
            // Si el profe pide de MAYOR A MENOR, cambiá el '>' por un '<'.
            if (datos[j] > datos[j+1]) {
                
                // Acá ocurre la magia del intercambio usando la variable auxiliar
                aux = datos[j];
                datos[j] = datos[j+1];
                datos[j+1] = aux;
            }
        }
    }

    // 3. IMPRIMIR EL RESULTADO
    printf("Arreglo ordenado: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", datos[i]);
    }

    return 0;
}
