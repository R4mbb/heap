#include <stdio.h>

int main(int argc, char *argv[]) {
  void *heap = malloc(32);
  char buf[8];
  read(0, buf, 128);

  printf("buf : %p\np : %p\n", buf, heap);
  free(heap);
  printf("malloc : %p\n", malloc(32));
}
