//
//  localVariable.c
//  newC
//
//  Created by yeawonKim on 2021/08/02.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int x = 2, y = 4;
    printf("A : x = %d, y = %d \n", x,y);
    {
        int x;
        x = 5;
        y++;
        printf("B : x = %d, y = %d \n", x,y);
    }
    printf("A : x = %d, y = %d \n", x,y);
}
