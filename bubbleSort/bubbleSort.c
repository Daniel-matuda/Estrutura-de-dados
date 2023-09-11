#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

void bubbleSort(int arr[], int n) {
  int temp;
  for(int i = 0; i < n-2; i++){

    if(arr[i] > arr[i+1]){
      temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
  }
}