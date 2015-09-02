#include <stdio.h>

long hanoi(int towel, int start, int target) {
  if (1 == towel) {
    return 1;
  }
  return hanoi(towel - 1, start, 3 - target - start) +
         hanoi(1, start, target) +
         hanoi(towel - 1, 3 - target - start, target);
}
