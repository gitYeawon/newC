//
//  main.c
//  newC
//
//  Created by yeawonKim on 2021/06/26.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main() {
    char s[50];
    printf("Enter strings? ");
    gets(s);
    printf("strings using gets() = %s \n", s); // save entire strings
    printf("Enrer strings? ");
    scanf("%s", s);
    printf("strings using scanf() = %s \n", s); //does not save the rest of the strings after space
}

