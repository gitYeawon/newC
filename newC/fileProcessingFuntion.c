//
//  fileProcessingFuntion.c
//  newC
//
//  Created by yeawonKim on 2021/09/07.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
int file_copy(char *oldname, char *newname);
void main() {
    char source[80], destination[80];
    printf("\n Enter source file : ");
    gets(source);
    printf("\n Enter destination file : ");
    gets(destination);
    if (file_copy(source, destination) == 0)
        puts("\n copy operaion succesful");
        else
            fprintf(stderr, "\n error during copy operation");
    }
    
int file_copy(char *oldname, char *newname){
        FILE *fold, *fnew;
        int c;
        if ((fnew = fopen(newname, "wb")) == NULL) {
            return(-1);
        }
        if ((fold = fopen(oldname, "rb")) == NULL) {
            return(-1);
        }
        while (1) {
            c = fgetc(fold);
            if (!feof(fold))
                fputc(c, fnew);
            else
                break;
        }
            
            fclose(fnew);
            fclose(fold);
            return(0);
        }
    
