#include<time.h>
#include<stdlib.h>
#include <iostream>
#include "ordenacion.h"
#include "tiempo.h"

using namespace std;

void RellenarArray(int v[],int num)
{
    srand(time(NULL));

    for(int i=0; i<num; i++)
    {
        v[i]=rand() % 1000;
    }
}

void CopiarArray(int org[],int dest[],int num)
{
    for(int i=0; i<num; i++)
    {
        dest[i] = org[i];
    }
}
bool ComprobarArrays(int v1[],int v2[],int num)
{
    bool resultado=true;
    int i=0;

    while (i<num && resultado)
    {
        if(v1[i]!=v2[i]) resultado=false;
        i++;
    }
    return resultado;

}
bool ComprobarOrdenado(int v[],int num)
{
    bool resultado=true;
    int i=0;
    while (i<num-1 && resultado)
    {
        if(v[i]>v[i+1]) resultado=false;
        i++;
    }
    return resultado;
}

void IniciarTest(int num)
{
      int tam = num;
    int *v1 = new int[tam] , *v2 = new int[tam], *v3 = new int[tam] , *v4 = new int[tam], *v5 = new int[tam];



    clock_t tiempoInicio1;
    clock_t tiempoFinal1;
    float tiempo;

    RellenarArray(v1, tam);

    CopiarArray(v1,v2,tam);
    CopiarArray(v2,v3,tam);
    CopiarArray(v3,v4,tam);
    CopiarArray(v4,v5,tam);


//Seleccion
   tiempoInicio1=clock();

    OrdenacionSeleccion(v1, tam);

    tiempoFinal1=clock();

    tiempo = ((float) (tiempoFinal1 - tiempoInicio1)) / CLOCKS_PER_SEC;

    cout << "Ordenacion seleccion " << tam << " elementos : "<< tiempo << endl;

//Insercion
    tiempoInicio1=clock();

  OrdenacionInsercion(v2,tam);

  tiempoFinal1=clock();

   tiempo = ((float) (tiempoFinal1 - tiempoInicio1)) / CLOCKS_PER_SEC;

    cout << "Ordenacion insercion " << tam << " elementos : "<< tiempo << endl;

//Burbuja
    tiempoInicio1=clock();

    OrdenacionBurbuja(v3,tam);

    tiempoFinal1=clock();

    tiempo = ((float) (tiempoFinal1 - tiempoInicio1)) / CLOCKS_PER_SEC;

    cout << "Ordenacion burbuja " << tam << " elementos : "<< tiempo << endl;

 //QuickSort
 tiempoInicio1=clock();

 OrdenacionQuickSort(v4,tam);

tiempoFinal1=clock();
tiempo = ((float) (tiempoFinal1 - tiempoInicio1)) / CLOCKS_PER_SEC;

    cout << "Ordenacion QuickSort " << tam << " elementos : "<< tiempo << endl;


//MergeSort

tiempoInicio1=clock();

 OrdenacionMergeSort(v5,tam);

tiempoFinal1=clock();
tiempo = ((float) (tiempoFinal1 - tiempoInicio1)) / CLOCKS_PER_SEC;

    cout << "Ordenacion MergeSort " << tam << " elementos : "<< tiempo << endl;



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

cout << endl;
}
