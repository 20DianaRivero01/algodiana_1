#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv) {
    int i, j, divisores, total, aux;
    int start = atoi(argv[1]);
    int finish = atoi(argv[2]);
    for (i = start; i <= finish; i++) {

        total = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                total += j;
                aux = total / 2;
            }
        }
        if (aux == i || (i % 2) == 0) {
            printf("%d ", i);
            if (aux == i) {
                printf("Perfecto ");
            }
            if ((i % 2) == 0) {
                printf("par");
            }
            printf("\n");
        }
    }
    return 0;
}
