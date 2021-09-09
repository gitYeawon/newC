//
//  memoryManagement5.c
//  newC
//
//  Created by yeawonKim on 2021/09/09.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define size 26
void main(){
    int i;
    char *alpha, ch;
    alpha = (char *)alloca(size*sizeof(char));
    for (i = 0,ch ='A'; i < size; i++,ch++)
        *(alpha + i) = ch;
    for (i = 0; i < size; i++) 
        printf("%c ", *(alpha + i));
        free(alpha);
    
}
