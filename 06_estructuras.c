#include <stdio.h>

// 1. DEFINIR LA ESTRUCTURA (Va siempre arriba del main)
// Es como un molde. Por ejemplo, para guardar la mercadería de un galpón.
struct Producto {
    int codigo;
    float precio;
}; // OJO: La estructura lleva punto y coma acá al final

int main() {
    // 2. CREAR UN ARREGLO DE ESTRUCTURAS (Un inventario de 5 productos)
    struct Producto inventario[5];

    // 3. CARGAR DATOS EN LA ESTRUCTURA
    // Para acceder a los datos de cada producto, se usa el PUNTO (.)
    inventario[0].codigo = 101;
    inventario[0].precio = 1500.50;

    printf("El producto %d cuesta $%.2f\n", inventario[0].codigo, inventario[0].precio);

    return 0;
}