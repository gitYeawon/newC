//
//  operator.c
//  newC
//
//  Created by yeawonKim on 2021/07/09.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include "operator.h"
void main_2() {
    int a, b, c;
    a = b= c = 0;
    a = ++b + ++c;
    printf("a = ++b + ++c 실행 후 a = %d, b = %d, c =%d \n",a,b,c);
    a = b++ + c++;
    printf("a = b++ + c++ 실행 후 a = %d, b = %d, c =%d \n",a,b,c);
    a = b-- + --c;
    printf("a = b-- + --c 실행 후 a = %d, b = %d, c =%d \n",a,b,c);
}
