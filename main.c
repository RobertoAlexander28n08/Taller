#include <stdio.h>
#include "funciones.h"
#include "lecturas.h"

int main() {
    int genero, producto, color, talla, esDeportivo;

    printf("\n---------Bienvenido a nuestra tienda online de ropa--------\n");
    genero = leerEntero("Seleccione el género (1: Hombre, 2: Mujer): ");

    // Mostrar opciones de producto y leer selección
    mostrarProducto();
    producto = leerEntero("Seleccione el producto: ");

    // Leer selección de color y talla
    color = leerEntero("Seleccione el color (1: Blanco, 2: Negro, 3: Azul, 4: Rojo, 5: Verde, 6: Rosa): ");
    talla = leerEntero("Seleccione la talla (1: Small, 2: Medium, 3: Large): ");

    // Mostrar disponibilidad del producto
    mostrarDisponibilidad(genero, producto, color, talla, esDeportivo);

    return 0;
}
//gcc -c .\funciones.c .\lecturas.c .\main.c
//gcc .\funciones.o .\lecturas.o .\main.o -o taller.exe
// .\taller.exe