#include <stdio.h>
#define MAX_SIZE 10

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
  int size = 8;
  // int intArray[size] = {0}; //init array length 8 values 0 in stack
  int intArray[MAX_SIZE]; 

  for(i = 0; i < size; i++){
    intArray[i] = 0;
  }

  display(intArray,size);

  // operation: insertion
  for(i = 0; i < size; i++){
    intArray[i] = i;
  }
  
  printf("\nOperation: insertion\n");
  display(intArray,size);

  // operation: update
  int index = 5;
  intArray[index] = 10;
  
  printf("\nOperation: update\n");
  display(intArray,size);

  // operation: search 
  printf("\nOperation: search by index\n");
  
  printf("\ndata at index %d:%d\n", index, intArray[index]); 

  printf("\nOperation: search by value\n");

  int value = 4;
  for(i = 0; i < size; i++){
    if(intArray[i] == value) {
      printf("value %d found at index %d \n", intArray[i],i);
      break;
    }
  }

  // operation: deletion
  int pos = 2; //position to delete
  for(i = pos-1; i < size-1; i++) { // copy next elem to curr elem
    intArray[i] = intArray[i + 1];
  }
  
  size--; // decr array size

  printf("\nOperation: delete element from array\n");
  display(intArray,size);

  return 0;
}
