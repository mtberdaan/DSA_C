#include <stdio.h>
#include <stdlib.h>

int main() {
  int* ptr;
  int size;

  printf("Enter size of elements:");
  scanf("%d", &size);

  ptr = (int*)malloc(size * sizeof(int));

  if (ptr == NULL) {
    printf("Memory not allocated.\n");
  }
  else {
    printf("Memory successfully allocated.\n");

    for (int i = 0; i < size; i++) {
      ptr[i] = i + 1;
    }

    printf("Array : [");
    for(int j = 0; j < size; j++) {
      printf(" %d ", ptr[j]);
    }
    printf(" ]\n");
  }
        
  return 0;
}
