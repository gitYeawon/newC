//
//  pointer7.c
//  newC
//
//  Created by yeawonKim on 2021/08/23.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    char A[]="CSKNOU";
    char *p = 'A';
    p = &A;
    int i;
    int size = sizeof(A);           //the numbers of elements of array A
    for (i = 0; i < size - 1; i++)
        printf("*(A+%d) : %c \n", i,*(A+i));
    for (i = 0; i < size - 1; i++)
        printf("p[%d] : %c \n", i, p[i]);
    
}
