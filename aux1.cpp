#include<time.h>
#include<stdlib.h>

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
        dest[i]=org[i];
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
