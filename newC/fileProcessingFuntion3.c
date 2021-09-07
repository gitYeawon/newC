//
//  fileProcessingFuntion3.c
//  newC
//
//  Created by yeawonKim on 2021/09/07.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#define MAXFILENAME 50
void main() {
    char fname[MAXFILENAME];
    int c;
    FILE *fp = NULL;
    fprintf(stdout, "\n Enter file's title : ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        return;
        
        fseek(fp, -1, SEEK_CUR);
        while (1) {
            c = getc(fp);
            putchar(c);
            if (ftell(fp)==1) {
                break;
                
                fseek(fp, -2, SEEK_CUR);
            }
            fclose(fp);
        }
    }
}
