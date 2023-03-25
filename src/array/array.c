#include <stdio.h>

void array_new(int size) int* {
  int *arr = (int*)malloc(size  * sizeof(int));
  if (arr == NULL) {
    printf("Error: unable to allocate memory!\n");
    exit(1);
  for (int i = 0; i < size; i++) {
    arr[i] = 0;
  }
  return arr;
}

void array_size(int *arr) int {
  int counter = 0;
  for (int i = 0; i < len(arr); i++) {
    if arr[i] != 0 {
      counter++;
    }
  }
  return counter;
}

int main() {
  int size = 10;
  int *arr = array_new(size);
  printf(array_size(*arr));
  
  return 0;
}
