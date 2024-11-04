#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  int* ptr = malloc(5000*sizeof(int));

  // To free or not to free?
  if(argc > 1) free(ptr);

  exit(0);
}
