//
//  structure7.c
//  newC
//
//  Created by yeawonKim on 2021/08/26.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
struct person {
    char name[20];
    char sex;
    int age;
};

typedef struct person MAN;
typedef unsigned char CHAR;
typedef int* PTR;

void main() {
    MAN member;
    CHAR data;
    PTR pt;
    strcpy(member.name, "HONG");
    member.sex ='M';
    member.age = 30;
    data = 100;
    pt=&(member.age);
    printf("*pt = %d \n", *pt);
}
