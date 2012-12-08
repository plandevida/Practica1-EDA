#include <iostream>
#include "ordenacion.h"
#include "aux1.h"
#include "tiempo.h"

using namespace std;

int main() {
    
    // Calcular el tiempo antes de la operación
    startCount();
    
    // Realizar la operación que queremos medir
    int tam = 10000;
    int v1[tam];

    RellenarArray(v1, tam);

    OrdenacionSeleccion(v1, tam);

    cout << ComprobarOrdenado(v1, tam);

    // Calcular el tiempo tras finalizar la operación
    finishCount();
    
    // Calcular el tiempo transcurrido en segundos
    float tiempo = getTotalCount();

    cout << tiempo;
}
