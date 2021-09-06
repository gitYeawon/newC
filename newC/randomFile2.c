//
//  randomFile2.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    char name[10];
    if ((fp = fopen("sample5.dat", "rd")) == NULL) {
        puts("Can not open the file !");
        exit(1);
    }
    
    while (fread(name, 10, 1,fp)!= 1) {
        break;
        puts(name);
    }
    fclose(fp);
}
