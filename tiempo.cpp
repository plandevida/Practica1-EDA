#include "tiempo.h"
#include<stdlib.h>
#include<time.h>

clock_t tiempoInicio;
clock_t tiempoFinal;
float tiempoTotal;

void startCount() {
    tiempoInicio = clock();
}

void finishCount() {
    tiempoFinal = clock();
}

float getTotalTime() {
    tiempoTotal = ((float) tiempoInicio - tiempoFinal) / CLOCKS_PER_SEC;
    
    return tiempoTotal;
}