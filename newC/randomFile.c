//
//  randomFile.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    FILE *fp;
    char name[10];
    if ((fp = fopen("sample5.dat", "wb")) == NULL) {
        puts("Can not open the file !");
        exit(1);
    }
    printf("Enter names, If you want to exit, enter 'END' \n");
    gets(name);
    while (strcmp(name, "END")) {
        fwrite(name, 10, 1, fp);
        gets(name);
    }
    fclose(fp);
}
