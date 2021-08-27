//
//  structure8.c
//  newC
//
//  Created by yeawonKim on 2021/08/27.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>

struct members{
    char fname[20];
    char lname[20];
    char phone[10];
};

struct members list[4];
int i;

void main() {
    for (i = 0; i < 3; i++) {
        printf("Enter first name: ");
        scanf("%s", list[i].fname);
        printf("Enter last name: ");
        scanf("%s", list[i].lname);
        printf("Enter phone number: ");
        scanf("%s", list[i].phone);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("Nma : %s %s", list[i].fname, list[i].lname);
        printf("\t\tPhone : %s \n", list[i].phone);
    }
}
