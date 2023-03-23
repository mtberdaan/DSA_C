
void array_new(int size){
  int *arr = (int*)malloc(size  * sizeof(int));
  if (arr == NULL) {
    printf("Error: unable to allocate memory!\n");
    exit(1);
  for (int i = 0; i < size; i++) {
    arr[i] = 0;
  }
  free(arr);
}

int main() {
  int size = 10;
  array_new(size);
  return 0;
}
