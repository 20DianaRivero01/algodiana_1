#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>



void swapTwoNumbers(int *a, int *b){//take the variable values

    int aux = *a;//recovery the a value in the auxiliar variable

    *a = *b;//changue the variable value

    *b = aux;//import the old value in the variable value

}


int main(){

    int first, second;

    first = 3;

    second = 5;

    printf("First: %d and second: %d\n", first, second);//first print our original values

    swapTwoNumbers(&first, &second);//call the function with the memory access of the variables

    printf("first: %d and second: %d\n", first, second);//finaly print the new values of variables

    return 0;

}
