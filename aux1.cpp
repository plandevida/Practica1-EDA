/**
 * Cabecera que contiene funciones para rellenar arrays, copiar arrays,
 * comprobar que dos arrays son iguales y comprobar que está ordenado 
 * crecientemente.
 *
 * autor: Juan Luis Pérez Valbuena
 */

#include<time.h>
#include<stdlib.h>
#include <iostream>

/**
 * Rellena un array con números aleatorios.
 */
void RellenarArray(int v[],int num)
{
    srand(time(NULL));
    
    for(int i=0; i<num; i++)
    {
        v[i]=rand() % 1000;
    }
}

/**
 * Copia el contenido de un array en otro dado.
 */
void CopiarArray(int org[],int dest[],int num)
{
    for(int i=0; i<num; i++)
    {
        dest[i] = org[i];
    }
}

/**
 * Comprueba que el dos arrays son iguales.
 */
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

/**
 * Comprueba que el array está ordenado crecientemente.
 */
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
