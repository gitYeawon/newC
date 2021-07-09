//
//  gets.c
//  newC
//
//  Created by yeawonKim on 2021/07/09.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include "gets.h"
#include <stdio.h>
#pragma warning(disable:4996)
void main_1() {
    char s[50];
    printf("Enter strings? ");
    gets(s);
    printf("strings using gets() = %s \n", s); // save entire strings
    printf("Enrer strings? ");
    scanf("%s", s);
    printf("strings using scanf() = %s \n", s); //does not save the rest of the strings after space
}
