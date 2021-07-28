//
//  studyFunctions.c
//  newC
//
//  Created by yeawonKim on 2021/07/28.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    int i, alp = 0, no = 0, et = 0;
    char s[20];
    printf("Enter any :");
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) {
        if(isalpha(s[i]))
            alp++;
        else if(isdigit(s[i]))
            no++;
        else
            et++;
        }
            printf("alphabets = %d \n", alp);
            printf("numbers = %d \n", no);
            printf("etc. = %d \n", et);
}
