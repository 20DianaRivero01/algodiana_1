#include <stdlib.h>
#include <stdio.h>
//prime numbers containing a number, a prime number is a number that is divisible by itself and by one.
int main(int argc, char ** argv) {
    int i, j, divisores; //"i" will be the numbers in the number entered, "j" is the test of the factors that can be divided into "i".
    int finish = atoi(argv[1]); //I saved my argument in the finish variable.
    for (i = 0; i < finish; i++) { // as long as my "i" is less than the number you entered.
        divisores = 0;	//Divisors have 0 on their counter, this is to identify if there are numbers that were divided by the primes. 
        for (j = 1; j < i; j++) { // when "i" is 0 and 1 does not enter. So the loop starts in two.
            if ((i % j) == 0) { //it passes to if-else
                divisores++; //1 is added to divisor
            }
        }
        if (divisores == 1) { //in case it has been divisible, it enters this loop and it is verified that there is a primer number.
            printf("%d ", i); // prints
        } //dividers are cleaned and zeroed and the process starts again.
    }
    printf("\n");
    return 0;
}

