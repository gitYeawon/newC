//
//  while_gugudan.c
//  newC
//
//  Created by yeawonKim on 2021/07/17.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main(){
    int i, j;
    i = 2;
    while (i <= 9) {
        printf("  -%d-  ", i);
        i++;
    }
    printf("\n");
    i = 1;
    while (i <= 9) {
        j = 2;
        while (j <= 9) {
            printf(" %dx%d=%2d", j,i,j*i);
            j++;
        }
        printf("\n");
        i++;
    }
}
