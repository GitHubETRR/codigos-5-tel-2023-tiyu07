/* Escribir un programa que sume dos números complejos en formato rectangular y
pregunte al final como desea ver el resultado si en polar o rectangular y lo muestre en
el formato que el usuario quiera */

#include <stdio.h>
#include <math.h>

#define PI 3.141593

void bienvenida(void);
float parte_real(void);
float parte_imaginaria(void);
float resultado_modulo (float,float);
float resultado_angulo (float,float);
void resultado(float, float);
float suma_de_complejos_reales(float, float);
float suma_de_complejos_imaginarios(float, float);
void union_de_complejos(float, float);
char eleccion(void);

int main(){
    bienvenida();
    printf("COMPLEJO 1\n");
    float real = parte_real();
    float imaginario = parte_imaginaria();
    printf("COMPLEJO 2\n");
    float real_2 = parte_real();
    float imaginario_2 = parte_imaginaria();
    float modulo = resultado_modulo(real, imaginario);
    float angulo = resultado_angulo(real, imaginario);
    resultado (modulo, angulo);
    char decision = eleccion();

    if (decision == 1) printf(" %f ", resultado);
    else if (!decision){
    
    }
    float real_3 = suma_de_complejos_reales(real, real_2); 
    float imaginario_3 = suma_de_complejos_imaginarios(imaginario, imaginario_2);
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa que suma complejos\n");
}

float parte_real(void) {
    float real;

    printf("Inserta la parte real ");
    scanf(" %f", &real);

    return real;
}
float parte_imaginaria(void) {
    float imaginaria;

    printf("Inserta la parte imaginaria");
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


char eleccion(){
    float decision;

    printf("Elegi si quieres verlo en cartesiano (0) o en polar (1)\n");
    scanf(" %f", &decision);

    return decision;

}

float suma_de_complejos_reales(float real, float real_2){
    float real_3;

    real_3 = real + real_2;
    
    return real_3;
}

float suma_de_complejos_imaginarios(float imaginario, float imaginario_2){
      float imaginario_3;

    imaginario_3 = imaginario + imaginario_2;
    
    return imaginario_3;
}
 
void union_de_complejos(suma_de_complejos_reales, suma_de_complejos_imaginarios){
    printf(" %f %f ", suma_de_complejos_imaginarios, suma_de_complejos_imaginarios);
}