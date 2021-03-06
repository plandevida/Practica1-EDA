/**
 * Módulo que contiene funciones para ordenar vectores,
 * por selección, inserción, burbuja, quick sort y merge sort.
 * 
 * autor: Juan Luis Pérez Valbuena
 * autor: Daniel Serrano Torres
 */

#include <iostream>
#include "ordenacion.h"

/* 
 * Ordenación por seleccion
 * Consiste en buscar el elemento menor de la lista y 
 * colocarlo en la primera posicion
 * Se reitera el proceso hasta recorrer toda la lista y dejarla ordenada.
 */
void OrdenacionSeleccion(int v[], int num) {
    int i, j, menor, aux;

    for (i = 0; i < num; i++) {
        menor = i;
        for (j = i + 1; j < num; j++) //Se busca el elemento mas pequeño de la lista
            if (v[j] < v[menor])
                menor = j;
        if (i != menor) //Se realiza el intercambio
        {
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}

/**
 * Ordenación por inserción.
 * Consiste en recorrer el vercor he ir insertando cada
 * elemento en la posición correcta donde estará ordenado.
 */
void OrdenacionInsercion(int v[], int num) {
    int i, j, x;

    for (i = 1; i < num; i++) // Recorre todo el array
    {
        x = v[i];
        j = i - 1;
        while ((j >= 0) && (v[j] > x)) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = x;
    }
}

/**
 * Ordenación por el método de la burbuja
 * Funciona revisando cada elemento de la lista
 * que va a ser ordenada con el siguiente, 
 * intercambiándolos de posición si están en el orden equivocado.
 */
void OrdenacionBurbuja(int v[], int num) {
    int i = 0, j, aux;

    bool modificado = true;

    while ((i < num - 1) && modificado) {
        modificado = false;

        for (j = num - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
                modificado = true;
            }
        }
        i++;
    }
}

/**
 * A partir de un elemento del vector se distribuyen los elementos
 * menoresa a este a su izquierda y los mayores
 * a su derecha.
 */
void particion(int v[], int a, int b, int &p) {
    int i, j;
    int aux;
    i = a + 1;
    j = b;
    while (i <= j) {
        if ((v[i] > v[a]) && (v[j] < v[a])) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i = i + 1;
            j = j - 1;
        } else {
            if (v[i] <= v[a]) i = i + 1;
            if (v[j] >= v[a]) j = j - 1;
        }
    }
    p = j;
    aux = v[a];
    v[a] = v[p];
    v[p] = aux;
}

/**
 * Implementación privada del quick sort.
 */
void quickSort(int v[], int a, int b) {
    int p;

    if (a <= b) {
        particion(v, a, b, p);
        quickSort(v, a, p - 1);
        quickSort(v, p + 1, b);
    }
}

/**
 * Ordenación por quick sort
 * Consiste en obtener un pivote de una verctor
 * y poner los números menores del pivote a su
 * izquierda y los mayores a su derecha. He ir
 * ordenando los elementos de la izquierda y
 * derecha del pivote recursivamente.
 */
void OrdenacionQuickSort(int v[], int num) {
    quickSort(v, 0, num - 1);
}

/**
 * Mezcla dos vectores de forma ordenada.
 */
void mezcla(int v[], int a, int m, int b) {
    int *u = new int[b - a + 1];
    int i, j, k;
    for (k = a; k <= b; k++) u[k - a] = v[k];
    i = 0;
    j = m - a + 1;
    k = a;
    while ((i <= m - a) && (j <= b - a)) {
        if (u[i] <= u[j]) {
            v[k] = u[i];
            i = i + 1;
        } else {
            v[k] = u[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i <= m - a) {
        v[k] = u[i];
        i = i + 1;
        k = k + 1;
    }
    while (j <= b - a) {
        v[k] = u[j];
        j = j + 1;
        k = k + 1;
    }
    delete[] u;
}

/**
 * Implenetación privada del merge sort
 */
void mergeSort(int v[], int a, int b) {
    int m;
    if (a < b) {
        m = (a + b) / 2;
        mergeSort(v, a, m);
        mergeSort(v, m + 1, b);
        mezcla(v, a, m, b);
    }
}

/**
 * Ordenación por merge sort
 * Consiste en partir el vercor en dos he ir ordenando
 * recursivamente las dos mitades, y después se mezclan
 * ordenadamente.
 */
void OrdenacionMergeSort(int v[], int num) {
    mergeSort(v, 0, num - 1);
}
