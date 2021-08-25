//
//  structure3.c
//  newC
//
//  Created by yeawonKim on 2021/08/25.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main(){
    struct person{
        char *name;
        int age;
        char sex;
    };
    struct person X[3] = {{"HONG", 20 ,'M'}, {"HWANG", 22, 'F'}, {"JUNG", 30, 'M'}};
    
    int i, sum = 0;
    for (i = 0; i < 3; i++) {
        printf("name : %s age: : %d gender : %d \n", X[i].name, X[i].age, X[i].sex);
        sum = sum + X[i].age;
    }
    printf("sum of ages : %d", sum);
}
