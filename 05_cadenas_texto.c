#include <stdio.h>
#include <string.h> // LIBRERÍA OBLIGATORIA PARA MANEJAR TEXTOS

int main() {
    char palabra1[20] = "Hola";
    char palabra2[20];

    // COPIAR TEXTO: No se puede hacer palabra2 = palabra1
    // strcpy(destino, origen);
    strcpy(palabra2, palabra1);

    // COMPARAR TEXTO: strcmp devuelve 0 si son exactamente iguales
    if (strcmp(palabra1, palabra2) == 0) {
        printf("Las palabras son iguales\n");
    }

    // MEDIR TEXTO: strlen te dice cuántas letras tiene la palabra
    int largo = strlen(palabra1);
    printf("La palabra tiene %d letras\n", largo);

    return 0;
}