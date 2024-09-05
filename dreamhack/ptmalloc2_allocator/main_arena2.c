#include <stdio.h>

int main() {
  char *ptr = malloc(22);
  char *ptr2 = malloc(32);
  char *ptr3 = malloc(22);

  free(ptr);
  free(ptr2);
  free(ptr3);
  return 0;
}
