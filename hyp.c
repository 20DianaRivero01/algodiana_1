#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float catA,catB,hyp; //variables declaration
    printf("Write the first leg: ");
    scanf("%f",&catA);
    printf("Write the second leg: ");
    scanf("%f",&catB);
        hyp = sqrt(catA*catA + catB*catB); //square, sum, and then sqrt to get the hyp.
    printf("The hypotenuse is: %f\n",hyp);
    return 0;
}

