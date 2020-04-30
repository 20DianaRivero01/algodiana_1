#include <stdlib.h>

#include <stdio.h>

int main(int argc, char ** argv) {

    int op = argc / 2, i,c=1;

    if (argc%2 == 0) {

        printf("be careful with your arguments\n");

    } else {

        float u[3], v[3], w[3];

        for (i = 0; i < op; i++) {

            u[i] = atof(argv[i+c]);

            v[i] = atof(argv[op+i+c]);

            printf("i = %d u = %.2f, v = %.2f \n",i, u[i], v[i]);

        }

        w[0] = (u[1] * v[2]) - (u[2] * v[1]);

        w[1] = (u[2] * v[0]) - (u[0] * v[2]);

        w[2] = (u[0] * v[1]) - (u[1] * v[0]);

        printf("wi = %.2f, wj = %.2f wk = %.2f\n", w[0], w[1], w[2]);

    }

}
