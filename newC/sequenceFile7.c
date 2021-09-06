//
//  sequenceFile7.c
//  newC
//
//  Created by yeawonKim on 2021/09/06.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    FILE *fp;
    fp = fopen("sample4.txt", "a");
    fputs("Cho Ds \n", fp);
    fputs("Han JK \n", fp);
    fputs("Kang MH \n", fp);
    fclose(fp);
}
