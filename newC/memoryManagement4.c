//
//  memoryManagement4.c
//  newC
//
//  Created by yeawonKim on 2021/09/09.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char *str[3];
    char temp[100];
    int i, j, size;
    printf("Enter 3 strings : \n");
    for (i = 0; i < 3; i++) {
        printf("%d. string : ", i+1);
        gets(temp);
        size = strlen(temp);
        str[i] = (char*)malloc( (sizeof(char)*size) + 1);
        strcpy(str[i], temp);
    }
    printf("print strings out in reverse \n");
    for (i = 2; i >= 0; i--) {
        size = strlen(str[i]);
        temp[size] = '\0';
        for (j = size - 1; j >= 0; j--)
            temp[size-1-j] = str[i][j];
            printf(" %d: %s \n",i+1, temp);
        }
        for (i=0; i<3; i++)
            free(str[i]);
}
