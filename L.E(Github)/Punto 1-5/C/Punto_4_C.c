/* Escribir un programa que al recibir una impedancia (parte real y parte imaginaria) y la
frecuencia de trabajo, indique el valor de la resistencia y el capacitor o inductor según
corresponda.*/

#include <stdio.h>
#include <string.h>

#define PI 3.141593

float insertar_variable(char);
void resultado(float, float, float);

int main() {

    printf("Bienvenido al programa que realiza la tarea de indicarte los componentes de un circuito segun su frecuencia y su impedancia\n\n");

    float real = insertar_variable (0);
    float imaginario = insertar_variable (1);
    float frecuencia = insertar_variable (2);
    resultado (real, imaginario, frecuencia);

    return 0;
}

float insertar_variable(char bool) {
    char variable[34];
    float val;

    if(!bool) strcpy(variable, "parte real de la impedancia");
    else if(bool == 1) strcpy(variable, "parte imaginaria de la impedansia");
    else strcpy(variable, "frecuencia del circuito");

    printf("Porfavor ponga la %s: ", variable);
    scanf("%f", &val);

    return val;
}

void resultado (float real, float imaginario, float frecuencia) {

    char comp [14];

    if (imaginario < 0 && imaginario != 0) {
        imaginario = -1 / (2 * PI * frecuencia * imaginario);
        strcpy(comp, "Capacitor:");
    } else if(imaginario > 0) {
        imaginario = imaginario / (2 * PI * frecuencia);
        strcpy(comp, "Inductor: ");
    }

    printf("\nResistor: %f", real);
    if (imaginario != 0) printf("\n%s %f", comp, imaginario);
}