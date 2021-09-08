//
//  memoryAllocation2.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>     //heather file for dynamic allocation
void main() {
    int *a;
    a = (int*)malloc(sizeof(int));  //memory space allocation
    if (a == NULL) {
        puts("Memory Allocation failed.!");
        exit(1);
    }
    *a = 20;
    printf("stored variable 'a' in Heap : %d \n", *a);
    free(a);                        //memory space allocation ended
}
