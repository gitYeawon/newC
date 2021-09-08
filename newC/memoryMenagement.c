//
//  memoryMenagement.c
//  newC
//
//  Created by yeawonKim on 2021/09/08.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
#include <string.h>   //for memcmp()
void main(){
    char *s1 = "aaab";
    char *s2 = "aaac";
    int stat;
    stat = memcmp(s1, s2, 4);       //if s1>s2 return positive or s1=s2 return 0
    printf("%d",stat);
}
