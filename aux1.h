/**
 * Cabecera que contiene funciones para rellenar arrays, copiar arrays,
 * comprobar que dos arrays son iguales y comprobar que está ordenado 
 * crecientemente.
 *
 * autor: Juan Luis Pérez Valbuena
 */

#ifndef _AUX1_H_
#define _AUX1_H_

/**
 * Rellena un array con números aleatorios.
 */
void RellenarArray(int v[],int num);

/**
 * Copia el contenido de un array en otro dado.
 */
void CopiarArray(int org[],int dest[],int num);

/**
 * Comprueba que el dos arrays son iguales.
 */
bool ComprobarArrays(int v1[],int v2[],int num);

/**
 * Comprueba que el array está ordenado crecientemente.
 */
bool ComprobarOrdenado(int [],int num);

void IniciarTest(int num);

#endif