#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {
    float magVect = 0, value; // variable one to store the magnitude, variable 2 to store the arguments of the product dot
    int aux = 0;
    int auy = 0;
    int i,j, product, cruz;  //i and j are iterators of the arguments

    //Producto punto

	//it has been put 4 because there is the ./a.exe
    if (argc == 4) {//This conditional checks if there are 3 or 6 arguments, otherwise, nothing runs and displays a message (a vector)
        for (i = 0; i <= 3; i++) {
            value = atoi(argv[i]); //we save each argument in this variable
            aux += value * value;// is going to read each argument of the vector and is going to get its square and make a sum of these products
        }
        magVect = sqrt(aux);
        printf("%.3f\n", magVect);// its magnitude is taken out and it proceeds to print (.3f beacuse i want just, for example, 4.321)

    } else if (argc == 7) {// in the case of having two vectors. It has 7 because we have ./a.exe
        printf("producto punto: ");
        for(j = 0; j <= 3; j++){
            aux = atoi(argv[j]); //save arguments to variable in vector x
            auy = atoi(argv[j+3]); //save arguments to variable in vector y
            product += aux*auy;// a summation of the product is made for each term located in the same place as the other vector and at the end it proceeds to print.
        }
        printf("%d", product);
        printf("\n");

        //Producto cruz

        printf("Producto cruz: ");// the following lines of code is the algorithm to perform the cross product of the vectors, where each of the resulting graphs is printed graphically
        //Y variable is being replaced with the new term until vector X is completed
        cruz = (atoi(argv[2]) * atoi(argv[6])) - atoi(argv[3]) * atoi(argv[5]);
        printf("(%d ", cruz);
        cruz = (atoi(argv[3]) * atoi(argv[4])) - atoi(argv[1]) * atoi(argv[6]);
        printf("%d ", cruz);
        cruz = (atoi(argv[1]) * atoi(argv[5])) - atoi(argv[2]) * atoi(argv[4]);
        printf("%d)", cruz);
        printf("\n");
    } else {
        printf("numero de entradas invalido\n"); //more or less arguments.
    }
    return 0;
}

