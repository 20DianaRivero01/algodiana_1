#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv) 
{
    int i, j, divisores;
    int finish = atoi(argv[1]);
    for (i = 0; i < finish; i++) 
    {
        divisores = 0;
        for (j = 1; j < i; j++) 
        {
            if ((i % j) == 0) 
            {
                divisores++;
            }
        }
        if (divisores == 1) 
        {
            printf("%d Is a prime number\n", i);
        }
    }
    return 0;
}
