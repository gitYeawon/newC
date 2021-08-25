//
//  structure4.c
//  newC
//
//  Created by yeawonKim on 2021/08/25.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
struct student{
    char name[10];
    int kor;
    int math;
};

void main() {
    struct student hs[4] = {{"KIM HG", 90, 95}, {"LEE SY", 85, 90}, {"PARK GS", 70, 85}, {"CHOI HJ", 95, 75}};
    
    struct student *p;
    p = hs;
    printf("%s %d %d \n", p->name, p->kor, p->math);  //hs[0]
    p += 3;
    printf("%s %d %d \n", p->name, p->kor, p->math);  //hs[3]
    p--;
    printf("%s %d %d \n", p->name, p->kor, p->math);  //hs[2]
}
