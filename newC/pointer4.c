//
//  pointer4.c
//  newC
//
//  Created by yeawonKim on 2021/08/21.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int *p , *q;
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    p = &a[3];
    printf("*p == %d \n", *p);              //40
    printf("*(p+3) == %d \n", *(p + 3));    //70 *(p+3) =/ *p+3
    q = p + 3;
    printf("*q == %d \n", *q);              //70
    printf("p - q == %d \n", p - q);        //-3
    printf("q - p == %d \n", q - p);        //3
   // printf("q + p == %d \n", p + q); only minus, It is a distance
}
