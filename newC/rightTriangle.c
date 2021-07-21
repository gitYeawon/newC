//
//  rightTriangle.c
//  newC
//
//  Created by yeawonKim on 2021/07/22.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main(){
    int a, b, c, n;
    printf("maximum value= ?");
    scanf("%d", &n);
    printf("A\tB\tC \n");
    for (a = 1; a <= n; a++) {
        for (b = 1; b <= n; b++) {
            for (c = 1; c <= n; c++) {
                if (a*a == b*b + c*c) {
                    printf("%d\t%d\t%d\t \n",a,b,c);
                }
            }
        }
    }
}
