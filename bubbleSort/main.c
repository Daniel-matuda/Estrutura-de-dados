#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

void imprimir_arr(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main (int argc, char* argv[]) {

  int arrInteiros[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
  int n = sizeof(arrInteiros)/sizeof(int);
  imprimir_arr(arrInteiros, n);
  bubbleSort(arrInteiros, n);
  
  exit(0);
}