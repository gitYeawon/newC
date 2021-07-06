//
//  main.c
//  newC
//
//  Created by yeawonKim on 2021/06/26.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>

void main() {
    int a;
    long long int b;
    float c;
    char ch;
    char s[20];
    printf("Enter a integer and long long integer : ");
    scanf("%d %lld", &a, &b);
    printf("a = %d, b = %lld \n", a, b);
    printf("Enter real numbers : ");
    scanf("%f", &c);
    printf("c = %10.4f, c(exponet) = %e \n", c,c);
    printf("Enter a letter :");
    scanf(" %c", &ch);
    //make a space front of the %c in order to ignore the enter key from the last input of scanf().
    printf("ch = %c \n", ch);
    printf("Enter strings : ");
    scanf("%s", s);
    printf("s[] = %s \n", s);
}

