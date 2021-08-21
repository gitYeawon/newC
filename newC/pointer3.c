//
//  pointer3.c
//  newC
//
//  Created by yeawonKim on 2021/08/21.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int *p, a[] = {10,20,30,40,50};
    p = &a[0];
    printf("*p  == %d \n", *p);     //10
    printf("*p  == %d \n", *p++);   //*p = 10 -> 20
    printf("*++p== %d \n", *++p);   //20 -> 30 *p = 30
    p = p + 2;
    printf("*p  == %d \n", *p);     //50
    printf("a[2]== %d \n", a[2]);   //30
    printf("*p+2== %d \n", *p+2);   //52 *(p+2) =/ *p+2
}
