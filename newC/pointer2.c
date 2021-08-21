//
//  pointer2.c
//  newC
//
//  Created by yeawonKim on 2021/08/21.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int a = 100;
    char b = 'b';
    void *p = NULL;
    p = (int*)&a;
    printf("*p = %d \n", *(int*)p);
    p = (char*)&b;
    printf("*p = %c \n", *(char*)p);
}
