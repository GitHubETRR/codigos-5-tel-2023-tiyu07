/* Escribir un programa que calcule el módulo de un número complejo y su ángulo (fase)
ingresando su parte real y su parte imaginaria */

#include <stdio.h>
#include <math.h>

#define PI 3.141593

void bienvenida(void);
float parte_real(void);
float parte_imaginaria(void);
float resultado_modulo (float,float);
float resultado_angulo (float,float);
void resultado(float, float);


int main(){
    bienvenida();
    float real = parte_real();
    float imaginario = parte_imaginaria();
    float modulo = resultado_modulo(real, imaginario);
    float angulo = resultado_angulo(real, imaginario);
    resultado (modulo, angulo);
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa que pasa de cartesiano a polar\n");
}

float parte_real(void) {
    float real;

    printf("Inserta la parte real ");
    scanf(" %f", &real);

    return real;
}
float parte_imaginaria(void) {
    float imaginaria;

    printf("Inserta la parte ");
    scanf(" %f", &imaginaria);

    return imaginaria;
}

float resultado_modulo (float real,float imaginaria){
    float modulo = sqrt(pow(real, 2)+pow(imaginaria, 2));
    return modulo;
}

float resultado_angulo (float real,float imaginaria){
    float angulo = atan2(imaginaria, real) * 180 / PI;
    return angulo;
}

void resultado(float modulo, float angulo){
    printf("Estos son los resultados\n");
    printf("Modulo: %f\n", modulo);
    printf("Angulo: %f\n", angulo);
}
