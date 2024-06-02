#include <stdio.h>
#include "funciones.h"

void mostrarDisponibilidad(int genero, int producto, int color, int talla, int esDeportivo) {
    int disponibilidad = 100;
    float precio = 0.0;

    switch (producto) {
        case 1: // Camisetas
            disponibilidad -= 25;
            switch (esDeportivo) {
                case 1: // Deportivo
                    precio = 29.99;
                    break;
                default: // Casual
                    switch (color) {
                        case 1: // Blanco
                            precio = 19.99;
                            break;
                        case 2: // Negro
                            precio = 14.99;
                            break;
                        case 3: // Azul
                            precio = 24.99;
                            break;
                        case 4: // Rojo
                            precio = 29.99;
                            break;
                        default: // Otros colores
                            precio = 0.0; // Precio no definido para otros colores
                            break;
                    }
                    break;
            }
            break;
        case 2: // Chompas
            disponibilidad -= 25;
            switch (color) {
                case 1: // Blanco
                    precio = 39.99;
                    break;
                case 2: // Negro
                    precio = 44.99;
                    break;
                case 3: // Azul
                    precio = 59.99;
                    break;
                case 4: // Rojo
                    precio = 29.99;
                    break;
                default: // Otros colores
                    precio = 0.0; // Precio no definido para otros colores
                    break;
            }
            break;
        case 3: // Pantalones
            switch (esDeportivo) {
                case 1: // Deportivo
                    switch (color) {
                        case 1: // Blanco
                            precio = 39.99;
                            break;
                        case 2: // Negro
                            precio = 59.99;
                            break;
                        case 3: // Azul
                            precio = 74.99;
                            break;
                        case 4: // Rojo
                            precio = 89.99;
                            break;
                        default: // Otros colores
                            precio = 0.0; // Precio no definido para otros colores
                            break;
                    }
                    break;
                default: // Casual
                    switch (color) {
                        case 1: // Blanco
                            precio = 29.99;
                            break;
                        case 2: // Negro
                            precio = 35.99;
                            break;
                        case 3: // Azul
                            precio = 49.99;
                            break;
                        case 4: // Rojo
                            precio = 59.99;
                            break;
                        default: // Otros colores
                            precio = 0.0; // Precio no definido para otros colores
                            break;
                    }
                    break;
            }
            break;
        case 4: // Zapatos
            switch (esDeportivo) {
                case 1: // Deportivo
                    switch (color) {
                        case 1: // Blanco
                            precio = 39.99;
                            break;
                        case 2: // Negro
                            precio = 59.99;
                            break;
                        case 3: // Azul
                            precio = 74.99;
                            break;
                        case 4: // Rojo
                            precio = 89.99;
                            break;
                        default: // Otros colores
                            precio = 0.0; // Precio no definido para otros colores
                            break;
                    }
                    break;
                default: // Casual
                    switch (color) {
                        case 1: // Blanco
                            precio = 35.99;
                            break;
                        case 2: // Negro
                            precio = 49.99;
                            break;
                        case 3: // Azul
                            precio = 59.99;
                            break;
                        case 4: // Rojo
                            precio = 29.99;
                            break;
                        default: // Otros colores
                            precio = 0.0; // Precio no definido para otros colores
                            break;
                    }
                    break;
            }
            break;
        case 5: // Gorras
            switch (esDeportivo) {
                case 1: // Deportivo
                    precio = 20.00;
                    break;
                default: // Casual
                    precio = 15.00;
                    break;
            }
            break;
        default:
            printf("Producto no válido.\n");
            return;
    }

    if (precio > 0.0) {
        printf("\nDisponibilidad: %d unidades\n", disponibilidad);
        printf("Precio: $%.2f\n", precio);
    } else {
        printf("\nProducto no disponible en ese color.\n");
    }
}
void mostrarProducto() {
    printf("\nSeleccione el producto:\n");
    printf("1. Camisetas\n");
    printf("2. Chompas\n");
    printf("3. Pantalones\n");
    printf("4. Zapatos\n");
    printf("5. Gorras\n");
}
