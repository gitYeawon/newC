//
//  staticVariable.c
//  newC
//
//  Created by yeawonKim on 2021/08/02.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void static_test();
void main() {
    int i = 0;
    while (i<5) {
        static_test();
        i++;
    }
}

void static_test(){
    static int s;
    auto int a = 0;
    ++s;
    ++a;
    printf("static s = %d, auto a = %d \n", s,a);
}
