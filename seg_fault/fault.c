#include <stdlib.h>

#define COUNT 500
#define LOOP_COUNT 5000000

int main(int argc, char** argv) {
  int* ptr = malloc(COUNT*sizeof(int));

  // Segmentation Fault!
  for(int i = 0; i < LOOP_COUNT; i++) {
    int x = ptr[i];
  }

  free(ptr);

  exit(0);
}
