//
//  sequenceFile6.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    char no[10], name[10];
    int mid, term, rep, att, i;
    fp = fopen("sample3.txt", "r");
    if (fp==NULL) {
        printf("Can not open the file");
        exit(1);
    }
    printf("number name midterm final report attending \n");
    while (!feof(fp)) {
        fscanf(fp, "%10s %8s %4d %4d %4d %4d \n", no, name, &mid, &term, &rep, &att);
    }
    fclose(fp);
}
