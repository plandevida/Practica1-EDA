#include <iostream>
#include "ordenacion.h"
#include "aux1.h"
#include "tiempo.h"

using namespace std;

int main() {

  float tiempo;

/* ORDENACIONES CON 5000 ELEMENTOS */
//    int tam = 5000;
    int tam = 10;
    int *v1 = new int[tam] , *v2 = new int[tam], *v3 = new int[tam] , *v4 = new int[tam], *v5 = new int[tam];


    RellenarArray(v1, tam);

    CopiarArray(v1,v2,tam);
    CopiarArray(v2,v3,tam);
    CopiarArray(v3,v4,tam);
    CopiarArray(v4,v5,tam);


//Seleccion
    startCount();

    OrdenacionSeleccion(v1, tam);

    finishCount();

    tiempo=getTotalCount();

    cout << "Ordenacion seleccion " << tam << " elementos : "<< tiempo << "s." << endl;

//Insercion
    startCount();

  OrdenacionInsercion(v2,tam);

  finishCount();

    tiempo=getTotalCount();

    cout << "Ordenacion insercion " << tam << " elementos : "<< tiempo << "s."<< endl;

//Burbuja
    startCount();
    
    OrdenacionBurbuja(v3,tam);

    finishCount();

    cout << "Ordenacion burbuja " << tam << " elementos : "<< tiempo << "s."<< endl;

 //QuickSort
 startCount();

 OrdenacionQuickSort(v4,tam);

finishCount();

    cout << "Ordenacion QuickSort " << tam << " elementos : "<< tiempo << "s."<< endl;
    

//MergeSort

startCount();

 OrdenacionMergeSort(v5,tam);

finishCount();

    cout << "Ordenacion QuickSort " << tam << " elementos : "<< tiempo << "s."<< endl;



if ( ComprobarArrays(v1,v2,tam)
    && ComprobarArrays(v2,v3,tam)
    && ComprobarArrays(v3,v4,tam)
    && ComprobarArrays(v4,v5,tam)
    && ComprobarOrdenado(v1,tam)
    && ComprobarOrdenado(v2,tam)
    && ComprobarOrdenado(v3,tam)
    &&  ComprobarOrdenado(v4,tam)
    &&  ComprobarOrdenado(v5,tam) )

        cout << "Todos los arrays estan ordenados y son iguales" << endl;
        else   cout << "NO todos los arrays estan ordenados y son iguales" << endl;


delete[] v1;
delete[] v2;
delete[] v3;
delete[] v4;
delete[] v5;

/* ORDENACIONES CON 10000 ELEMENTOS */

  tam = 10000;
    v1 = new int[tam] , v2 = new int[tam], v3 = new int[tam] , v4 = new int[tam], v5 = new int[tam];


    RellenarArray(v1, tam);

    CopiarArray(v1,v2,tam);
    CopiarArray(v2,v3,tam);
    CopiarArray(v3,v4,tam);
    CopiarArray(v4,v5,tam);


//Seleccion
    startCount();

    OrdenacionSeleccion(v1, tam);

    finishCount();

    tiempo=getTotalCount();

    cout << "Ordenacion seleccion " << tam << " elementos : "<< tiempo << "s." << endl;

//Insercion
    startCount();

  OrdenacionInsercion(v2,tam);

  finishCount();

    tiempo=getTotalCount();

    cout << "Ordenacion insercion " << tam << " elementos : "<< tiempo << "s."<< endl;

//Burbuja
    startCount();

    OrdenacionBurbuja(v3,tam);

    finishCount();

    cout << "Ordenacion burbuja " << tam << " elementos : "<< tiempo << "s."<< endl;

    
 //QuickSort
 startCount();

 OrdenacionQuickSort(v4,tam);

finishCount();

    cout << "Ordenacion QuickSort " << tam << " elementos : "<< tiempo << "s."<< endl;

/*
//MergeSort

startCount();

 OrdenacionMergeSort(v5,tam);

finishCount();

    cout << "Ordenacion QuickSort " << tam << " elementos : "<< tiempo << "s."<< endl;

*/

//if (ComprobarArrays(v1,v2,tam) && ComprobarArrays(v2,v3,tam) && ComprobarArrays(v3,v4,tam) && ComprobarArrays(v4,v5,tam) &&
//    ComprobarOrdenado(v1,tam) && ComprobarOrdenado(v2,tam) && ComprobarOrdenado(v3,tam) &&  ComprobarOrdenado(v4,tam) &&  ComprobarOrdenado(v5,tam))
//
//        cout << "Todos los arrays estan ordenados y son iguales" << endl;
//        else   cout << "NO todos los arrays estan ordenados y son iguales" << endl;


delete[] v1;
delete[] v2;
delete[] v3;
delete[] v4;
delete[] v5;

}
