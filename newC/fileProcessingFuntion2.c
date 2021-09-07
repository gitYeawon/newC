//
//  fileProcessingFuntion2.c
//  newC
//
//  Created by yeawonKim on 2021/09/07.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void clear_keyboard(void);
void main(){
    FILE *fp;
    float data[5];
    int count;
    char filename[20];
    puts("\n Enter 5 decimal numbers: ");
    for (count = 0; count < 5; count++)
        scanf("%f", &data[count]);
        clear_keyboard();
        puts("\n Enter the file's name: ");
        gets(filename);
        if ((fp = fopen(filename, "w")) == NULL) {
            fprintf(stderr, "Error opening file %s.", filename);
            exit(1);
        }
        
        for (count = 0; count < 5; count++) {
            fprintf(fp, "\n data[%d] = %8.3f", count, data[count]);
            fprintf(stdout, "\ndata[%d] = %8.3f", count, data[count]);
        }
        fclose(fp);
    }
    void clear_keyboard(void) {
        char junk[80];
        gets(junk);
    }

