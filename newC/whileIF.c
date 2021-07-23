//
//  whileIF.c
//  newC
//
//  Created by yeawonKim on 2021/07/24.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main(){
    char ch;
    int Nchar = 0, Nnum = 0, Nblank = 0;
    printf("Enter any sentences : ");
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9')
            ++Nnum;
        else if(ch == ' ' || ch == '\t')
            ++Nblank;
        else
            ++Nchar;
        }
        printf("\n***** result ***** \n");
        printf("numbers = %d \n", Nnum);
        printf("spaces = %d \n", Nblank);
        printf("letters = %d \n", Nchar);
    }
