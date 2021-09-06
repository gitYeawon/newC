//
//  sequenceFile4.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fp;
    char c;
    fp = fopen("sample1.txt", "r");
    if(fp == NULL){
        printf("Can not open the file !");
        exit(1);
    }
    while ((c = getc(fp) != EOF)) {
        putchar(c);
        fclose(fp);
    }
}
