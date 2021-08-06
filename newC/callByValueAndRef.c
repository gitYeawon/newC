//
//  callByValueAndRef.c
//  newC
//
//  Created by yeawonKim on 2021/08/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void by_value(int a, int b, int c);
void by_ref(int *a, int *b, int *c);
void main(){
    int x = 2, y = 4, z = 6;
    printf("Before calling by value() \t: ");
    printf("x = %d, y = %d, z = %d \n", x, y, z);
    by_value(x,y,z);
    printf("After calling by value() \t: ");
    printf("x = %d, y = %d, z = %d \n", x, y, z);
    by_ref(&x, &y, &x);
    printf("After calling by_ref() \t\t: ");
    printf("x = %d, y = %d, z = %d \n", x, y, z);
}

void by_value(int a, int b, int c){
    a = 0;
    b = 0;
    c = 0;
}

void by_ref(int *a, int *b, int *c){
    *a = 0;
    *b = 0;
    *c = 0;
}
