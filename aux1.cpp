#include<time.h>
#include<stdlib.h>
#include <iostream>

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
    
    std::cout << "v1[";
    for (int a = 0 ; a < num; a++) {
        std::cout << v1[a] << ",";
    }
    std::cout << "]" << std::endl;

    std::cout << "v2[";
    for (int e = 0 ; e < num; e++) {
        std::cout << v2[e] << ",";
    }
    std::cout << "]" << std::endl;
    
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
