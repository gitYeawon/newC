//
//  sequenceFile3.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include "stdio.h"
#include "stdlib.h"
void main() {
    FILE *fp;
    char no[10], name[10];
    int mid, term, rep, att, i;
    fp = fopen("sample3.txt", "w");
    if (fp ==NULL ) {
        printf("Can not open the file! ");
        exit(1);
    }
    fprintf(stdout, "Enter numbers names midterms finals reports attends scores \n");
    //stdout - a special pointer which is pointing out a monitor
    for (i=0; i<5; ++i) {
        scanf("%s %s %d %d %d %d", no, name, &mid, &term, &att);
        fprintf(fp, "%-10s %-8s %3d %3d %3d %3d \n", no, name, mid, term, rep, att);
    }
}
