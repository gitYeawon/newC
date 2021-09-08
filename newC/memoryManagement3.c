//
//  memoryMenagement3.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void main(){
    char s[] = "1234567890";
    printf("s's data before using memset(): %s \n",s);
    memset(s, '*', strlen(s));
    printf("s's data after using memset(): %s \n",s);
}
