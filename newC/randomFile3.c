//
//  randomFile3.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void main() {
    char str[10];
    FILE *fp = fopen("sample6.txt", "wt");
    fputs("1234567890", fp);
    fclose(fp);
    fp=fopen("sample6.txt", "rt");
    fseek(fp, 7, SEEK_SET);
    fgets(str, 4, fp);
    printf("print the 3 letters from the 7th : %s \n", str);
    fseek(fp, -2, SEEK_CUR);
    fgets(str, 3, fp);
    printf("print the first 2 letters from the current location : %s \n", str);
    fseek(fp, -9, SEEK_END);
    fgets(str, 6, fp);
    printf("print the first 5 letters from the end : %s \n", str);
    fclose(fp);
}
