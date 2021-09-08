//
//  memoryAllocation3.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void main(){
    int size;       //declare a variable for the length of string
    char *str;      //a pointer for connecting to dynamic allocaion
    printf("Enter the length of string: ");
    scanf("%d", &size);
    str = (char*)malloc(size+1);
    if (str == NULL) {
        puts("Memory Allocaion failed.!");
        exit(1);
    }
    printf("input string : ");
    scanf("%s", str);
    printf("stored string in dynamin allocaion : %s\n",str);
    free(str);
}
