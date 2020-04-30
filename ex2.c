#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) 
{
    float magVect = 0, value, product;
    int aux = 0;
    int auy = 0;
    int i,j;
    if (argc == 4) 
    {
        for (i = 0; i <= 3; i++) 
        {
            value = atoi(argv[i]);
            aux += value * value;
        }
        magVect = sqrt(aux);
        printf("%.3f\n", magVect);

    } else if (argc == 7) 
    {
        printf("producto punto: ");
        for(j = 0; j <= 3; j++)
        {
            aux = atoi(argv[j]);
            auy = atoi(argv[j+3]);
            product = aux*auy;
            if(j>0)
            {
                printf("%.0f ", product);
            }
            value += product * product;
        }
        printf("\n");
        magVect = sqrt(value);
        printf("%.3f\n", magVect);
    } else 
    {
        printf("numero de entradas invalido\n");
    }
    return 0;
}
