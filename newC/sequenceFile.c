//
//  outputFiles.c
//  newC
//
//  Created by yeawonKim on 2021/08/30.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void main() {
    FILE *fp;
    char c;
    fp = fopen("sample.txt", "w");
    
    if (fp==NULL) {
        printf("can not open the file.!");
        exit(1);
    }
    printf("Enter letters, If you want to finish it, press Ctrl + z please.");
    while ((c = getchar()) != EOF) {
        putc(c, fp);
        fclose(fp);
    }
}
