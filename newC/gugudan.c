//
//  gugudan.c
//  newC
//
//  Created by yeawonKim on 2021/07/15.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int i, j;
    printf("\n");
    for (i = 2; i <= 9; i++)
        printf(" -%d- ", i);
    printf("\n");
    for (i = 1; i <= 9; i++) { //outer for statement ->Row
        for (j = 2; j <= 9; j++) { // inner for statement ->column
            printf(" %dx%d=%2d ", j,i,j*i);
        }
        printf("\n");
    }
}
