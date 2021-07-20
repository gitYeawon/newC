//
//  markStars.c
//  newC
//
//  Created by yeawonKim on 2021/07/21.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main(){
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i <= 5; i++) {
        for (j = 5; j > -1; j--) {
            if (i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
