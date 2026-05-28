#include <stdio.h>

// FUNCIÓN 1: Paso por VALOR (No modifica el original)
// Recibe una variable común. Los cambios mueren acá adentro.
void duplicarValor(int x) {
    x = x * 2;
}

// FUNCIÓN 2: Paso por REFERENCIA (SÍ modifica el original)
// ATENCIÓN: En C, cuando pasás un arreglo (arr[]), se modifica el original directamente.
void duplicarArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int numero = 10;
    int numeros[3] = {1, 2, 3};

    // Prueba 1: Variable normal
    duplicarValor(numero);
    // Imprime 10, porque la función solo modificó una copia.
    printf("El numero original NO cambio: %d\n", numero); 

    // Prueba 2: Arreglo
    duplicarArreglo(numeros, 3);
    // Imprime 2, porque la función modificó el arreglo original en la memoria.
    printf("El primer numero del arreglo SI cambio: %d\n", numeros[0]); 

    return 0;
}