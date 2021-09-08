//
//  memoryAllocation4.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void main() {
    int i;
    int *a;
    a = (int *)calloc(5, sizeof(int));  //Initialize the allocated memory to 0
    for (i = 0; i < 5; i++) {
        printf("%d \n",a[i]);
    }
    free(a);
}
