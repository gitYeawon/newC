//
//  operator.c
//  newC
//
//  Created by yeawonKim on 2021/07/09.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include "operator.h"
void main_2() {             //x = i++ => x = 5, i =6
    int a, b, c;            //x = ++i => x = 6, i =6
    a = b= c = 0;
    a = ++b + ++c;
    printf("a = ++b + ++c 실행 후 a = %d, b = %d, c =%d \n",a,b,c); //a=2, b=1, c=1
    a = b++ + c++;
    printf("a = b++ + c++ 실행 후 a = %d, b = %d, c =%d \n",a,b,c); //a=2, b=2, c=2
    a = b-- + --c;
    printf("a = b-- + --c 실행 후 a = %d, b = %d, c =%d \n",a,b,c); //a=3, b=1, c=1
}
