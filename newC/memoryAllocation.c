//
//  memoryAllocation.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void test1(int);
void test2(int);
int a = 100;              //Data -a global variable, which will be remainning till the program ended
void main() {
    int b = a;            //stack -a local variable
    test1(b);             //stack -call the test1() and variable c,d will be removed after passing it
    test2(b);
}

void test1(int c){
    int d;
    d = c + 10;
    printf("test1() : d = %d \n",d);
}

void test2(int e){
    int f;
    f = e + 20;
    printf("test2() : f = %d \n",f);
}
