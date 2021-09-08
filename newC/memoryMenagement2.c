//
//  memoryMenagement2.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void main(){
    char src[] = "1234567890";
    char dest[] = "abcdefghijklmnopqrstuvwxyz";
    char *stat;
    printf("dest's data before executing the memcpy() : %s \n",dest);
    stat = (char *)memcpy(dest, src, strlen(src));
    if (stat)
        printf("dest's data after executing the memcpy() : %s \n",dest);
    else
        printf("Copy Failed \n");
    }

