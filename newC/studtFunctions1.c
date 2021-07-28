//
//  studtFunctions1.c
//  newC
//
//  Created by yeawonKim on 2021/07/28.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
int sum(int,int);
void test();
void main() {
    int s;
    test();
    s = sum(30, 40);
    printf("sum from 30 to 40 = %d \n", s);
    printf("sum from 100 to 200 = %d \n", sum(100,200));
    
}

void test() {
    printf("diffrent functions \n");
}

int sum(int a, int b){
    int i, s = 0;
    for (i = a; i <= b; i++)
        s = s + i;
    return s;
    }

