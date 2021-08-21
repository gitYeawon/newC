//
//  pointer.c
//  newC
//
//  Created by yeawonKim on 2021/08/21.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int *p, i = 3, j;
    p = &i;                 //the pointer variable p is pointing the variable i's address
    j = *p;                 //put the content of pointer variable p to the variable j
    j++;
    printf("*p = %d \n", *p);
    printf(" p = %d \n", p);
    printf(" j = %d \n", j);
}
