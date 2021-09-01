//
//  sequenceFile2.c
//  newC
//
//  Created by yeawonKim on 2021/09/01.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main(){
    char name[64];
    FILE *fp;
    if ((fp = fopen("sample1.txt", "w")) == NULL) {
        puts("Can not open the file");
        exit(1);
    }
    printf("Enter names, Once you are done, Enter 'end' pleas. \n");
    gets(name);
    while (strcmp(name, "end")) {
        strcmp(name, "\n");
        fputc(name, fp);
        gets(name);
    }
    fclose(fp);
}
