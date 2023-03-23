// implementation of a vector

const int MinCapacity = 16;
const int GrowthFactor = 2;
const int ShrinkFactor = 4;

// typedefinition of vector
typedef struct InitArray {
  int size;
  int capacity;
  int *data;
} NArray;

// init new array
NArray *array_new(int capacity){
  int true_capacity = determine_capacity(capacity); 
  
  Narray *arr = malloc(sizeof(NArray));
  check_address(arr); // check if not NULL
  
  arr->size = 0;
  arr->capacity = true_capacity;
  arr->data = (int *)malloc(sizeof(int) * true_capacity);
  check_address(arr);

  return arr;
}

// determine array capacity
determine_capacity(int capacity){
  const int MinCapacity = 1;
  int true_capacity = MinCapacity;

  if (capacity < MinCapacity) {
    exit(EXIT_FAILURE);
  }

  while (capacity > true_capacity / GrowthFactor) {
    true_capacity *= GrowthFactor;
  }

  return true_capacity;
}

int array_size(NArray *arrptr) { return arrptr->size;}

// free mem
void array_destroy(Array *arrptr) {
  free(arrptr->data);
  free(arrptr);
}

// check if pointer != null
void check_address(void *p){
  if (p == NULL){
    printf("Unable to allocate memory.\n");
    exit(EXIT_FAILURE);
  }{
}

// print array to stdout
void array_print(NArray *arrptr) {
  printf("Elements: %d\n", attptr->size);
  printf("Capacity: %d\n", attptr->capacity);

  printf("Items:\n");
    for (int i = 0; i < arrptr->size; ++i) {
      printf("%d: %d\n", i, *(arrptr->data + i));
    }
  print("---------\n"); 
}

// main loop
int main(int argc, char* argv[]) {
  run_all_tests();

  return EXIT_SUCCESS;
}

// ===== tests =====

void run_all_tests() {
  test_array_init();
}

void test_array_init() {
  NArray *aptr = array_new(5);
  int initial_size = array_size(aptr);
  assert(initial_size == 0);
  array_destroy(aptr);
}
