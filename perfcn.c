#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int perfectNumber(int number) {//take a parameter called aparameter:i

    int i,aux;
    int total = 0;
    int j;

    for (i = 1; i <= number; i++) {//do the PerfectNumber algorithm

        if (number % i == 0) {

            total += i;

            aux = total / 2;

        }

    }

    if (aux == number) {//if the sum of the factors is equal to the itself number

        j=0;

    } else{// in another case is 1

        j=1;

    }

    return j;// return 1 or 0: yes or not

}



int main(int argc, char ** argv) {//ask two numbers during the execution

    int i;
    int start = atoi(argv[1]);//transfor char to int
    int finish = atoi(argv[2]);

    for (i = start; i <= finish; i++) {//create a range with the arguments

        if (perfectNumber(i) == 0) {//call the function with the parameter i, if return 0 is a perfect number

            printf("%d Is a perfect number\n", i);

        }

    }

    return 0;

}
