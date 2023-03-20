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
  // 1. static array with initial capacity
  // 2. add elements, while keeping track of elements
  // 3. if adding to many elements, create new static array with twice the capacity and copy original elements into it
  
  int i=0;
  int intArray[2]={0};
  int arrSize = sizeof(intArray)/sizeof(intArray[0]);
 
  display(intArray, 2);
  
  for(i=0; i<3; i++){
    if (i > arrSize){
      // create new arr
    }
    else {
      intArray[i] = i
    }
  };
  

  return 0;
}
