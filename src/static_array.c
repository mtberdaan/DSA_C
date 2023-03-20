#include <stdio.h>

// helper function to print array
static void display(int intArray[], int length) {
  int i = 0;
  printf("Array : [");
  for(i = 0; i < length; i++) {
    printf(" %d ", intArray[i]);
  }
  printf(" ]\n ");
}

int main() {
  
  int i = 0;
  int intArray[8];
  
  display(intArray,8);
  // array prints random values already present in mem
  // where is it initialized?

  return 0;
}
