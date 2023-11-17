/*  Escribir un programa que devuelva el número complejo en formato rectangular (su
parte real + j su parte imaginaria), ingresando su módulo y ángulo (fase) */

#include <stdio.h>
#include <math.h>

#define PI 3.141593

void bienvenida(void);
float parte_modulo(void);
float parte_angulo(void);
float resultado_real(float,float);
float resultado_imaginario(float,float);
void resultado(float, float);


int main(){
    bienvenida();
    float modulo = parte_modulo();
    float angulo = parte_angulo();
    float real = resultado_real(modulo, angulo);
    float imaginario = resultado_imaginario(modulo, angulo);
    resultado (real, imaginario);
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa que pasa de polar a cartesiano\n");
}

float parte_modulo(void) {
    float modulo;

    printf("Inserta el modulo ");
    scanf(" %f", &modulo);

    return modulo;
}
float parte_angulo(void) {
    float angulo;

    printf("Inserta el angulo ");
    scanf(" %f", &angulo);

    return angulo;
}

float resultado_real (float modulo,float angulo){
    float real = (modulo * cos(angulo * PI / 180));
    return real;
}

float resultado_imaginario (float modulo,float angulo){
    float imaginario = (modulo * sin(angulo * PI / 180));
    return imaginario;
}

void resultado(float real, float imaginario){
    printf("Estos son los resultados\n");
    printf("Real: %f\n", real);
    printf("Imaginario: J%f\n ", imaginario);
    printf(" %f J%f", real, imaginario);
}
