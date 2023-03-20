#include <stdio.h>

// helper function to print array
static void display(int intArray[], int length) {
  int i = 0;
  printf("Array : [");
  for(i = 0; i < length; i++) {
    printf(" %d ", intArray[i]);
  }
  printf(" ]\n");
}

int main() {

  int i = 0; 
  int intArray[8] = {0}; //init array length 8 values 0 in stack

  display(intArray,8);

  // operation: insertion
  for(i = 0; i < 8; i++){
    intArray[i] = i;
  }
  
  printf("\nOperation: insertion\n");
  display(intArray,8);

  // operation: update
  int index = 5;
  intArray[index] = 10;
  
  printf("\nOperation: update\n");
  display(intArray,8);

  // operation: search 
  printf("\nOperation: search by index\n");
  
  printf("\ndata at index %d:%d\n", index, intArray[index]); 

  printf("\nOperation: search by value\n");

  int value = 4;
  for(i = 0; i < 8; i++){
    if(intArray[i] == value) {
      printf("value %d found at index %d \n", intArray[i],i);
      break;
    }
  }


  return 0;
}
