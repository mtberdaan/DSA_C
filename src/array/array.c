// implementation of a vector

const int MinCapacity = 16;
const int GrowthFactor = 2;
const int ShrinkFactor = 4;

// typedefinition of vector
typedef struct InitArray {
  int elements;
  int capacity;
  int *data;
} NArray;

// init new array
NArray *array_new(int capacity){
  int true_capacity = determine_capacity(capacity); 
  
  Narray *arr = malloc(sizeof(NArray));
  check_address(arr); // check if not NULL
  
  arr->elements = 0;
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

