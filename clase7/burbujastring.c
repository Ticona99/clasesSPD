#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int legajos[10];
    char nombres[10][21];//
    int notas[10];
    float alturas[10];

    return o;
}

void insertion (int data[], int len)
{

    int i,j;
    int temp;

    for(i=1; i<len; i++)
    {
        temp=data[i];
        j=i-1;

        while(j>=0 && temp<data[j])
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=temp;
    }
}
