#include <stdio.h>
#include "lecturas.h"


int leerEnteroPositivo(const char* mensaje) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while (valor <= 0);
    return valor;
}

int leerEnteroEntre(const char* mensaje, int liminf, int limsup) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while (valor < liminf || valor > limsup);
    return valor;
}



float leerFlotantePositivo(const char* mensaje) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while (valor < 0);
    return valor;
}


int leerEntero(const char* mensaje) {
    int valor;
    printf("%s", mensaje);
    scanf("%d", &valor);
    return valor;
}

float leerFlotante(const char* mensaje) {
    float valor;
    printf("%s", mensaje);
    scanf("%f", &valor);
    return valor;
}

char leerCaracter(const char* mensaje) {
    char valor;
    printf("%s", mensaje);
    scanf(" %c", &valor);
    return valor;
}