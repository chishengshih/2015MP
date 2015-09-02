//
//  main.c
//  Hanoi
//
//  Created by Chi-Sheng Shih on 9/2/15.
//  Copyright (c) 2015 Chi-Sheng Shih. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"

int main(int argc, const char * argv[]) {
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
