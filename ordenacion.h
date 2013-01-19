/**
 * Módulo que contiene funciones para ordenar vectores,
 * por selección, inserción, burbuja, quick sort y merge sort.
 * 
 * autor: Juan Luis Pérez Valbuena
 * autor: Daniel Serrano Torres
 */

#ifndef _ORDENACION_H_
#define _ORDENACION_H_

/* 
 * Ordenación por seleccion
 * Consiste en buscar el elemento menor de la lista y 
 * colocarlo en la primera posicion
 * Se reitera el proceso hasta recorrer toda la lista y dejarla ordenada.
 */ 
void OrdenacionSeleccion(int v[],int num);

/**
 * Ordenación por inserción.
 * Consiste en recorrer el vercor he ir insertando cada
 * elemento en la posición correcta donde estará ordenado.
 */
void OrdenacionInsercion(int v[],int num);

/**
 * Ordenación por el método de la burbuja
 * Funciona revisando cada elemento de la lista
 * que va a ser ordenada con el siguiente, 
 * intercambiándolos de posición si están en el orden equivocado.
 */
void OrdenacionBurbuja(int v[],int num);

/**
 * Ordenación por quick sort
 * Consiste en obtener un pivote de una verctor
 * y poner los números menores del pivote a su
 * izquierda y los mayores a su derecha. He ir
 * ordenando los elementos de la izquierda y
 * derecha del pivote recursivamente.
 */
void OrdenacionQuickSort(int v[],int num);

/**
 * Ordenación por merge sort
 * Consiste en partir el vercor en dos he ir ordenando
 * recursivamente las dos mitades, y después se mezclan
 * ordenadamente.
 */
void OrdenacionMergeSort(int v[],int num);

#endif
