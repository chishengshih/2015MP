#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  unsigned n = 0, i, total;
  if (argc < 2) {
    scanf("%u", &n);
  } else {
    n = atoi(argv[1]);
  }
  total = 0;
  for (i = 1; i <= n; ++i) {
    total += i;
  #ifdef PRINT
    if (i % 5 == 0) {
      printf("%u\n", i);
    }
  #endif
  }
  printf("total: %u\n", total);
}
