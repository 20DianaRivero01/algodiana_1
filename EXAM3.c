#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv) {
    int i, j, divisores, total, aux; //i (number in range), j (divisores) counters to find the numbers by which is a perfect number, divisors to store how many numbers it is divided into.
    int start = atoi(argv[1]); //number where my program starts
    int finish = atoi(argv[2]); //number where it ends
    for (i = start; i <= finish; i++) { //while i equals the beginning of my range to the maximum range, increase the iterators

        total = 0;
        
        //process to iterate the numbers and know if it is a perfect number
        for (j = 1; j <= i; j++) { //
            if (i % j == 0) { //Now, for each number we want to know if it is perfect, it is its own divisor, obtaining the module and comparing that the r is 0
                total += j; //If its a perfect divisor, it is added to the accumulator of the sum of the divisors (total).
                aux = total / 2; // Here it is verified if it is a perfect number, it is the sum of all the factors of i
            } // The sum value is cleared, and done again for the rest of the range numbers
        }
        //check if the perfect number is odd or even
        if (aux == i || (i % 2) == 0) { //if the auxiliary has the value of the number that is being analyzed and its remainder when divided by two is 0 (even):
            printf("%d ", i); // prints the number and::
            if (aux == i) { // If it is equal to the number that I enter (numbers that are within the range), it is perfect
                printf("Perfecto ");
            }
            if ((i % 2) == 0) { //if when dividing by two the number that you e
                printf("par");
            }
            printf("\n");
        }
    }
    return 0;
}
