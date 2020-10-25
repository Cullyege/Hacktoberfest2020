  
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define TAM 8

void merge(int *v, int ini, int meio, int fim)
{
    int *aux = (int*) malloc((fim-ini)*sizeof(int));
    int i = ini;
    int j = meio;
    int k = 0;
    
    for(k=0; k<(fim-ini); k++)
    {
        if(i<meio && j<fim)
        {
            if(v[i]<=v[j])
            {
                aux[k] = v[i];
                i++;
            }
            else
            {
                aux[k] = v[j];
                j++;
            } 
        }
        else
        {
            if(i>=meio)
            {
                aux[k] = v[j];
                j++;
            }
            else
            {
                aux[k] = v[i];
                i++;
            }
        }
    }
    memcpy(&(v[ini]),aux,(fim-ini)*sizeof(int));
    free(aux);
}

void mergeSort(int* v, int ini, int fim)
{
    int meio = (ini+fim)/2;
    if((fim-ini)>1)
    {
        mergeSort(v,ini,meio);
        mergeSort(v,meio,fim);
    }
    merge(v,ini,meio,fim);
}

void printArray(int* v)
{
    printf("[ ");
    for(int i = 0; i<TAM; i++)
        printf("%d  ",v[i]);
    printf("]\n");
}

int main()
{
    int v[TAM] = {1,5,3,2,4,10,17,22};
    mergeSort(v,0,TAM);
    printArray(v);
    return 0;
}