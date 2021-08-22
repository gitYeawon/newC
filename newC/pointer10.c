//
//  pointer10.c
//  newC
//
//  Created by yeawonKim on 2021/08/23.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    char a='A', *p, **pp;
    p = &a;
    pp = &p;
    printf("**p = %c", **pp);  //A
}
