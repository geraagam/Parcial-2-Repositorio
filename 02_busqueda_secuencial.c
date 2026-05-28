#include <stdio.h>

int main() {
    // 1. EL ARREGLO Y EL VALOR A BUSCAR
    // ATENCIÓN: En el examen, cambiá "datos", el tamaño "5", los valores y el número "buscado".
    int datos[5] = {15, 42, 8, 99, 23};
    int buscado = 99; 
    
    // Esta variable es clave. Empieza en -1 porque la posición 0 existe en los arreglos.
    // Si al final del programa sigue valiendo -1, significa que el número nunca apareció.
    int posicion = -1; 

    // 2. ALGORITMO DE BÚSQUEDA SECUENCIAL
    // El for recorre todo el arreglo, posición por posición.
    for (int i = 0; i < 5; i++) { 
        
        if (datos[i] == buscado) { 
            posicion = i; // Si lo encuentra, guarda el índice (la posición)
            
            // ¡EL PUNTO CLAVE DEL EXAMEN!
            // El 'break' corta el ciclo apenas encuentra el PRIMER resultado.
            // Si el profe te pide encontrar TODAS las posiciones donde aparece (como en la pregunta 25), 
            // tenés que BORRAR este 'break' y quizás imprimir la posición directamente acá adentro.
            break; 
        }
    }

    // 3. IMPRIMIR EL RESULTADO
    if (posicion != -1) {
        printf("El numero %d fue encontrado en la posicion: %d\n", buscado, posicion);
    } else {
        printf("El numero %d NO esta en el arreglo.\n", buscado);
    }

    return 0;
}
