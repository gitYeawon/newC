//
//  memoryManagement6.c
//  newC
//
//  Created by yeawonKim on 2021/09/09.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char *str;
    str = (char *)malloc(sizeof(char)*10);
    strcpy(str, "123456789");
    printf("Before changing the size : str = %s \n",str);
    str = (char *)realloc(str, 50);
    strcat(str, "abcdefghijklmnopqrstuvwxyz");
    printf("After chaning the size : str = %s \n",str);
    free(str);
}
