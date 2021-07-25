//
//  doubleWhile.c
//  newC
//
//  Created by yeawonKim on 2021/07/26.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main(){
    int sum = 0, num = 0, i = 0;
    while (i<5) {
        while (num <= 0) {
            printf("enter a positive integer (No.%d) :", i + 1);
            scanf("%d", &num);
        }
        sum += num;
        num = 0;
        i++;
    }
    printf("Sum : %d \n", sum);
    }
