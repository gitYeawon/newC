//
//  pointer5.c
//  newC
//
//  Created by yeawonKim on 2021/08/22.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    static int a[] = {10,20,30,40,50};
    int *pa, b, c, d;
    pa = a;
    b = *pa + *(pa + 4);   //a[0] = 10 + a[4] = 50
    pa += 4;               //pa = &a[0+4]
    c = *pa + *(pa -4);    //a[4] = 50 + a[0] = 10
    d = *pa + 5;           //a[4] = 50 + 5
    printf("b=%d, c=%d, d=%d", b,c,d);
}
