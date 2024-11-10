#include <stdlib.h>

int main(int argc, char** argv) {

  volatile int x;
  int* ptr = malloc(5000*sizeof(int));

  // To free or not to free?
  if(argc > 1) free(ptr);
  else x = ptr[0];

  exit(0);
}
