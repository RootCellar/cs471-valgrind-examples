#include <stdlib.h>

#define COUNT 16

int main(int argc, char** argv) {
  int* ptr = malloc(COUNT * sizeof(int));

  for(int i = 0; i < COUNT; i++) {
      ptr[i] = 17;
  }

  // Oops!
  if(argc > 1) ptr[COUNT] = 18;
  if(argc > 2) ptr[-1] = 16;

  free(ptr);

  exit(0);
}
