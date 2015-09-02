#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("Usage: hanoi n.\n");
		return -1;
	} else {
		int n = atoi(argv[1]);
		long res = hanoi(n, 0, 2);
		printf("%ld\n", res);
		return 0;
	}
}
