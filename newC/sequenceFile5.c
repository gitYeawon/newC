//
//  seqeunceFile5.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char name[64];
    FILE *fp;
    if ((fp = fopen("sample2.txt", "r")) == NULL) {
        puts("Can not open the file !");
        exit(1);
    }
    while ((fgets(name, 20, fp) != NULL)) {
        printf("%s", name);
        fclose(fp);
    }
}
