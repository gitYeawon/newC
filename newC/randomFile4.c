//
//  randomFile6.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    long pos;
    int i;
    FILE *fp = fopen("sample7.txt", "wr");
    fputs("1234#", fp);
    fclose(fp);
    fp = fopen("sample7.txt", "rt");
    for (i = 0; i < 4; i++) {
        putchar(fgetc(fp));
        pos = ftell(fp);
        fseek(fp, -1, SEEK_END);
        putchar(fgetc(fp));
        fseek(fp, pos, SEEK_SET); //returns the file locator to the previous locaion refers to saved information
    }
    fclose(fp);
}
