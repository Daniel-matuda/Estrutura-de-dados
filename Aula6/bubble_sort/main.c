#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimir_arr(int array[], int n) {
    printf("\n");
    for(int i = 0; i < n; i++){
        printf(" %d ", array[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {

    int array_inteiros[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int tamanhoArray = sizeof(array_inteiros)/sizeof(int);

    imprimir_arr(array_inteiros, tamanhoArray);
    bubble_sort(array_inteiros, tamanhoArray);
    imprimir_arr(array_inteiros, tamanhoArray);

    exit(0);
}
