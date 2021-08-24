//
//  structure.c
//  newC
//
//  Created by yeawonKim on 2021/08/24.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct person{
    char name[8];
    int age;
    char sex;
};

void main() {
    struct person X = {"HONGGILDONG", 30, 'M'};
    struct person Y;
    strcpy(Y.name, "JEONG");
    Y.age = 35;
    Y.sex = 'M';
    printf("X's Information : %s, %d, %c \n", X.name, X.age, X.sex);
    printf("Y's Information : %s, %d, %c \n", Y.name, Y.age, Y.sex);
    printf("sizeof(person.name) : %dbyte \n", sizeof(X.name));
    printf("sizeof(person.age) : %dbyte \n", sizeof(X.age));
    printf("sizeof(person.sex) : %dbyte \n", sizeof(X.sex));
    printf("sizeof(person) : %dbyte \n", sizeof(X));
    
}
