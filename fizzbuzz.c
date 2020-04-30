#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i; //variable i
    for(i=0;i<=100;i++) //between this variables
    {
        if (i%3==0 && i%5==0) //condition
        {
        printf("Fizzbuzz\n"); //First print
        }

        else if(i%3==0) //If this happens, then print Fizz.
        {
        printf("Fizz\n");
        }
        else if(i%5==0)
        {
        printf("Buzz\n");
        }
        else printf("%d\n",i);
    }
    return 0;
}

