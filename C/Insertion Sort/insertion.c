#include<stdio.h>


void insertionSort(int* v, int tam);


int main()
{
    int v[5] = {5,1,2,4,3};

    insertionSort(v,5);

    printf("%d %d %d %d %d\n", v[0], v[1], v[2], v[3], v[4]);

    return 0;
}

void insertionSort(int* v, int tam)
{
    int i, chave, j;
    for(j = 1; j < tam; j++)
    {
        chave = v[j];
        i = j - 1;
        while(i>=0 && v[i]>chave)
        {
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = chave;
    }
}