/* Escribir un programa que ingresada una tensión y una corriente (con su modulo y
ángulo) y la frecuencia de trabajo, informe el valor de la impedancia (parte real y parte
imaginaria, y luego el valor de los componentes asociados, resistor y capacitor o
inductor según corresponda. Para este programa deberá utilizar lo realizado en el punto
anterior como subprograma */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.141593

#define I 1
#define V 0
#define angulo 1
#define modulo 0
#define real 0
#define reactivo 1
#define vector_x 2
#define moder_x 2
#define impedancia_x 2

void ingresar_vector (float[vector_x][moder_x], char, char);
float ingresar_frecuencia(void);
void calculo_impe (float[impedancia_x], float[vector_x][moder_x], char);
void componentes (float[impedancia_x], float[impedancia_x], float);
void resultado (float[impedancia_x], float[impedancia_x]);

void main() {
    float vector[vector_x][moder_x], impedancia[impedancia_x], componente[impedancia_x] = {0};

    printf("Bienvenido al programa que realiza la tarea de mostrar los componentes de un circuito segun la tension y la corriente y la impedancia\n\n");

    for (char i = 0; i < vector_x; i++) {
        for (char j = 0; j < moder_x; j++) ingresar_vector(vector, i, j);
    }

    float f = ingresar_frecuencia();

    for (char i = 0; i < impedancia_x; i++) calculo_impe(impedancia, vector, i);

    componentes(componente, impedancia, f);

    resultado(componente, impedancia);
}

void ingresar_vector(float vector[vector_x][moder_x], char var, char mode) {
    char msgVar[10], msgMode[7];
    float val;

    if (var == V) strcpy(msgVar, "Voltaje");
    else if (var == I) strcpy(msgVar, "Corriente");

    if (mode == modulo) strcpy(msgMode, "modulo");
    else if (mode == angulo) strcpy(msgMode, "angulo");

    printf("%s ----- Porfavor inserte el valor del %s: ", msgVar, msgMode);
    scanf(" %f", &val);

    vector[var][mode] = val;
}

float ingresar_frecuencia(void) {
    float f;

    printf("\nPorfavor inserte el valor de la frecuencia: ");
    scanf(" %f", &f);

    return f;
}

void calculo_impe(float impedancia[impedancia_x], float vector[vector_x][moder_x], char var) {
    float num;
    float mod = vector[V][modulo] / vector[I][modulo];
    float ang = vector[V][angulo] - vector[I][angulo];

    if (var == real) num = mod * cos(ang * PI / 180);
    else if (var == reactivo) num = mod * sin(ang * PI / 180);

    impedancia[var] = num;
}

void componentes(float componente[impedancia_x], float impedancia[impedancia_x], float f) {
    componente[real] = impedancia[real];

    componente[reactivo] = (impedancia[reactivo] < 0)? -1 / (2 * PI * f * impedancia[reactivo])
        : impedancia[reactivo] / (2 * PI * f);
}

void resultado(float impedancia[], float componente[]) {
    printf(" \nEstos son los resultados\n\n");
    printf("Parte real: %f\n", impedancia[real]);
    printf("Parte reactiva: %f\n", impedancia[reactivo]);
    printf("Resistor: %f\n", componente[real]);

    if (impedancia[reactivo] < 0) printf("Capacitor: %f", componente[reactivo]);
    else printf("Inductor: %f", componente[reactivo]);
}